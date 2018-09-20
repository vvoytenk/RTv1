/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:57:16 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:57:17 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rtv.h"

t_xyz			convert(int x, int y)
{
    t_xyz d;

    d.x = x * -1. / WID;
    d.y = y * -1. / HEI;
    d.z = 1.;
    return (d);
}

double   clamp(double v, double lb, double ub)
{
    if (v > ub)
        v = ub;
    else if (v < lb)
        v = lb;
    return (v);
}