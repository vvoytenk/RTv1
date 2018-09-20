/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 22:24:12 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/13 22:24:13 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void            init_obj2(t_object *obj2)
{
	obj2[0].color = create_rgb(0, 255, 0);
	obj2[0].type = 2;
	obj2[0].specular = 10;
	obj2[0].data = init_plane(vec_new(0, 1, 0), vec_new(0, -1, 0));
	obj2[1].data = NULL;
	obj2[2].data = NULL;
	obj2[3].data = NULL;

}
void            init_cam2(t_cam *cam2)
{
	cam2->pos = vec_new(0, 0, -5);
}

void     init_light2(t_light    *light)
{
	light[0].pos = (vec_new(0, 1, -10));
	light[0].i = 0.6;
//	light[0].d = vec_new(0, 0, 0);
	light[1].i = 0.2;
//	light[1].d = vec_new(0, 0, 0);
//	light[1].pos = vec_new(0, 0, 0);
	light[2].i = 0.2;
	light[2].d = vec_norm(vec_new(0, 2, 0));
//	light[1].pos = vec_new(0, 0, 0);
}

