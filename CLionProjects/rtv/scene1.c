/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:49:21 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:49:29 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void            init_obj1(t_object *obj1)
{
    obj1[0].data = init_sphere(1, 1, 1, 0.5);
	obj1[1].data = init_plane(vec_new(1, 0, 0), vec_new(-1, 1, 0));
//    obj1[1].data = init_sphere(1, 1, 0, 0.5);
    obj1[2].data = init_sphere(1, 1, 3, 0.5);
    obj1[3].data = init_plane(vec_new(0, 2, 0), vec_new(0, -1, 0));
    obj1[0].type = 1;
    obj1[1].type = 2;
    obj1[2].type = 1;
    obj1[3].type = 2;
    obj1[0].specular = 100;
    obj1[1].specular = 10;
    obj1[2].specular = 100;
    obj1[3].specular = 10;
    obj1[0].color = create_rgb(255, 0, 0);
    obj1[1].color = create_rgb(0, 0, 255);
    obj1[2].color = create_rgb(0, 255, 0);
    obj1[3].color = create_rgb(255, 255, 0);
}
void            init_cam1(t_cam *cam1)
{
    cam1->pos = vec_new(0, 0, -5);
}

void     init_light1(t_light    *light)
{
    light[0].pos = vec_new(2, 2, 0);
    light[0].i = 0.6;
//    light[0].d = vec_new(0, 0, 0);
    light[1].i = 0.2;
//    light[1].d = vec_new(0, 0, 0);
//    light[1].pos = vec_new(0, 0, 0);
    light[2].i = 0;
    light[2].d = vec_norm(vec_new(0, 0, 0));
//    light[1].pos = vec_new(0, 0, 0);
}
