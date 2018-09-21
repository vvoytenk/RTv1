/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 22:40:22 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/13 22:40:24 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

#define SPHERE ((t_sphere *)obj->data)
#define PLANE ((t_plane *)obj->data)
#define CONE ((t_cone *)obj->data)
#define CYL ((t_cylinder *)obj->data)

double          closest_intersect(t_rtv *r, t_xyz dir)
{
	double      closest_t;
	double tmp;
	int         i;

	i = -1;
	r->scene.tmp = NULL;
	closest_t = r->scene.obj->t_max;
	while (++i < 4)
	{
		tmp = closest_t;
		if (r->scene.obj[i].type == 1)
			intersect_sphere(r, dir, &(r->scene.obj[i]), &tmp);
		if (r->scene.obj[i].type == 2)
			intersect_plane(r, dir, &(r->scene.obj[i]), &tmp);
		if (r->scene.obj->type == 3)
			intersect_cone(r, dir, &(r->scene.obj[i]), &tmp);
		if (r->scene.obj->type == 4)
			intersect_cylinder(r, dir, &(r->scene.obj[i]), &tmp);
		if (tmp < closest_t && r->scene.obj->t_min <= tmp && tmp <= r->scene.obj->t_max)
		{
			closest_t = tmp;
			r->scene.tmp = &(r->scene.obj[i]);
		}

	}
	return (closest_t);
}

void        intersect_cylinder(t_rtv *r, t_xyz d, t_object *obj, double *closest_t)
{
    double	dis;
    t_xyz   k;
    t_xyz   t;
    t_xyz   oc;

    if (CYL)
    {
		oc = vec_dif(r->scene.cam.pos, CYL->pos);
		k.x = vec_scalar(d, d) - pow(vec_scalar(d, CYL->dir), 2);
		k.y = 2 * (vec_scalar(d, oc) - vec_scalar(d, CYL->dir) * vec_scalar(oc, CYL->dir));
		k.z = vec_scalar(oc, oc) - pow(vec_scalar(oc, CYL->dir), 2) - pow(CYL->radius, 2);
		dis = k.y * k.y - 4 * k.x * k.z;
		if (dis < 0)
			t = vec_new(-1, -1, 0);
		else
			t = vec_new((-k.y + sqrt(dis)) / (2 * k.x), (-k.y - sqrt(dis)) / (2 * k.x), 0);
		if (t.x < *closest_t && r->scene.obj->t_min <= t.x && t.x <= r->scene.obj->t_max) {
			*closest_t = t.x;
			r->scene.tmp = obj;
		}
		if (t.y < *closest_t && r->scene.obj->t_min <= t.y && t.y <= r->scene.obj->t_max) {
			*closest_t = t.y;
			r->scene.tmp = obj;
		}
	}
}

void        intersect_cone(t_rtv *r, t_xyz dir, t_object *obj, double *closest_t)
{
	double	dis;
	t_xyz   k;
	t_xyz   t;
	t_xyz   oc;

    if (CONE)
    {
        oc = vec_dif(r->scene.cam.pos, CONE->pos);
        k.x = vec_scalar(dir, dir) - (1 + CONE->angle * CONE->angle)
                                     * pow(vec_scalar(dir, CONE->dir), 2);
        k.y = 2 * (vec_scalar(dir, oc) - (1 + CONE->angle * CONE->angle)
                                         * vec_scalar(dir, CONE->dir) * vec_scalar(oc, CONE->dir));
        k.z = vec_scalar(oc, oc) - (1 + CONE->angle * CONE->angle)
                                   * pow(vec_scalar(oc, CONE->dir), 2);
        dis = k.y * k.y - 4 * k.x * k.z;
        if (dis < 0)
            t = vec_new(-1, -1, 0);
        else
            t = vec_new((-k.y + sqrt(dis)) / (2 * k.x), (-k.y - sqrt(dis)) / (2 * k.x), 0);
        if (t.x < *closest_t && r->scene.obj->t_min <= t.x && t.x <= r->scene.obj->t_max) {
            *closest_t = t.x;
            r->scene.tmp = obj;
        }
        if (t.y < *closest_t && r->scene.obj->t_min <= t.y && t.y <= r->scene.obj->t_max) {
            *closest_t = t.y;
            r->scene.tmp = obj;
        }
//        printf("%f\n", *closest_t);
    }
}

void		intersect_plane(t_rtv *r, t_xyz dir, t_object *obj, double *closest_t)
{
	double 	d;
	double 	a;

	if (PLANE)
	{
		d = vec_scalar(PLANE->point, dir);
		if (d != 0)
		{
			obj->intersect = vec_dif(PLANE->point, r->scene.cam.pos);
			a = vec_scalar(PLANE->normal, obj->intersect);
			if (a / d > 0.1 && a / d < *closest_t)
			{
				r->scene.tmp = obj;
				*closest_t = a / d;
			}
			else
				*closest_t = 0;
		}
	}
}

void		intersect_sphere(t_rtv *r, t_xyz d, t_object *obj, double *closest_t)
{
	double dis;
	t_xyz k;
	t_xyz t;
	t_xyz oc;

	oc = vec_dif(r->scene.cam.pos, SPHERE->pos);
	k.x = vec_scalar(d, d);
	k.y = 2 * vec_scalar(oc, d);
	k.z = vec_scalar(oc, oc) - SPHERE->radius * SPHERE->radius;
	dis = k.y * k.y  - 4 * k.x * k.z;
	if (dis < 0)
		t = vec_new(-1, -1, 0);
	else
		t = vec_new((-k.y + sqrt(dis)) / (2 * k.x), (-k.y - sqrt(dis)) / (2 * k.x), 0);
	if (t.x < *closest_t && r->scene.obj->t_min <= t.x && t.x <= r->scene.obj->t_max)
	{
		*closest_t = t.x;
		r->scene.tmp = obj;
	}
	if (t.y < *closest_t && r->scene.obj->t_min <= t.y && t.y <= r->scene.obj->t_max)
	{
		*closest_t = t.y;
		r->scene.tmp = obj;
	}
//	printf("%f\n", *closest_t);
}
