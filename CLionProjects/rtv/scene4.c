/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 14:42:30 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/21 14:42:32 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void            init_obj4(t_object *obj2)
{
    obj2[0].color = create_rgb(0xb1, 0xc7, 0xee);
    obj2[0].type = 4;
    obj2[0].specular = 300;
    obj2[0].data = init_cylinder(vec_new(0, 5, 0), vec_new(0, 1, 0), 1);
    obj2[1].data = NULL;
    obj2[2].data = NULL;
    obj2[3].data = NULL;

}

void            init_cam4(t_cam *cam4)
{
    cam4->pos = vec_new(0, 0, -5);
}

void     init_light4(t_light    *light)
{
    light[0].pos = (vec_new(-10, 0, -3));
    light[0].i = 0.6;
//	light[0].d = vec_new(0, 0, 0);
    light[1].i = 0.2;
//	light[1].d = vec_new(0, 0, 0);
//	light[1].pos = vec_new(0, 0, 0);
    light[2].i = 0.2;
    light[2].d = vec_new(0, 0, -3);
}

