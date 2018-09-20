/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:49:16 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:49:17 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

int     scene(char *arg, t_rtv *r)
{
    int n;

    if(!(n = ft_atoi(arg)))
        return (0);
    if (n == 1)
        scene1(r);
    if (n == 2)
        scene2(r);
//  if (n == 3)
//        scene3(r);
    if (!render(r))
        return (0);
    return (1);
}

int     scene1(t_rtv *r)
{
    init_cam1(&(r->scene.cam));
    init_light1(r->scene.light);
    init_obj1(r->scene.obj);
    return (1);
}

int     scene2(t_rtv *r)
{
    init_cam2(&(r->scene.cam));
    init_light2(r->scene.light);
    init_obj2(r->scene.obj);
    return (1);
}