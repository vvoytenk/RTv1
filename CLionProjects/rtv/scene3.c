/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:43:02 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/20 19:43:04 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void            init_obj3(t_object *obj2)
{
    obj2[0].color = create_rgb(0, 255, 0);
    obj2[0].type = 3;
    obj2[0].specular = 10;
    obj2[0].data = init_cone(vec_new(0, 0, 0), vec_new(0, -1, 0), 15);
    obj2[1].data = NULL;
    obj2[2].data = NULL;
    obj2[3].data = NULL;

}
void            init_cam3(t_cam *cam3)
{
    cam3->pos = vec_new(0, 0, -5);
}

void     init_light3(t_light    *light)
{
    light[0].pos = (vec_new(1, 0, 0));
    light[0].i = 0.6;
    light[1].i = 0.2;
    light[2].i = 0.2;
    light[2].d = vec_new(-5, 0, 0);
}
