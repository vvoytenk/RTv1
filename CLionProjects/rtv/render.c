/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:51:35 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:51:37 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

#define PLANE ((t_plane *)obj->data)

int             render(t_rtv *r)
{
    int         x;
    int         y;
    t_xyz       dir;

    x = -WID / 2;
    while (x < WID / 2)
    {
        y = -HEI / 2;
        while (y < HEI / 2)
        {
            dir = vec_norm(convert(x, y));
            r->buf[x + WID / 2 + (y + WID / 2 ) * WID] = trace_ray(r, dir);
            y++;
        }
        x++;
    }
    return (1);
}

int    trace_ray(t_rtv *r, t_xyz dir)
{
    double      closest_t;

    r->scene.obj->t_min = 1;
    r->scene.obj->t_max = MAX;
    closest_t = closest_intersect(r, dir);
//    printf("%f\n", closest_t);
    if (!r->scene.tmp)
        return (0x000000);
    else
        return (get_color(r->scene.tmp, dir, r, closest_t));
}

int 	get_color(t_object *obj, t_xyz d, t_rtv *r, double closest_t)
{
	if (r->scene.obj->type == 1)
		return (get_color_sphere(obj, d, r, closest_t));
	if (r->scene.obj->type == 2)
		return (get_color_plane(obj, d, r, closest_t));
//	if (r->scene.obj->type == 3)
//		get_color_cone(obj, d, r, closest_t);
//	if (r->scene.obj->type == 4)
//		get_color_cylinder(obj, d, r, closest_t);
}

int 	get_color_plane(t_object *obj, t_xyz d, t_rtv *r, double closest_t)
{
    obj->intersect = vec_sum(r->scene.cam.pos, vec_mult(closest_t, d));
    obj->normal = vec_mult(1 / vec_len(PLANE->normal), vec_mult(-1, PLANE->normal));
    if (vec_scalar(d, PLANE->normal) < 0)
        PLANE->normal = vec_mult(-1, PLANE->normal);
    return (convert_color(obj->color, lightning_sp(d, r, obj)));
}

int    get_color_sphere(t_object *obj, t_xyz d, t_rtv *r, double closest_t)
{
    obj->intersect = vec_sum(r->scene.cam.pos, vec_mult(closest_t, d));
    obj->normal = vec_norm(vec_dif(obj->intersect, ((t_sphere *)obj->data)->pos));
    return (convert_color(obj->color, lightning_sp(vec_mult(-1, d), r, obj)));
}

double             lightning_sp(t_xyz d, t_rtv *r, t_object *obj)
{
    double      intensity;
    int         i;
    t_xyz       l;
    double      n_dot;
    double      r_dot;
    t_xyz       R;

    i = -1;
    intensity = 0;
    l = vec_new(0, 0, 0);
    while (++i < 3)
    {
        if (i == 0)
        {
            l = vec_norm(vec_dif(r->scene.light[i].pos, obj->intersect));
            r->scene.obj->t_max = 1;
        }
        else if (i == 1)
            intensity += r->scene.light[i].i;
        else
        {
             l = r->scene.light[i].d;
             r->scene.obj->t_max = MAX;
        }
        if ((n_dot = vec_scalar(obj->normal, l)) > 0)
            intensity += r->scene.light[i].i * n_dot / (vec_len(obj->normal) * vec_len(l));
        if (obj->specular != -1)
        {
            R = vec_dif(vec_mult(2 * vec_scalar(obj->normal, l), obj->normal), l);
            if((r_dot = vec_scalar(R, d)) > 0)
                intensity += r->scene.light[i].i * pow(r_dot / vec_len(R) * vec_len(d), obj->specular);
        }
    }
    printf("%f\n", intensity);
    return (intensity);
}
