/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:48:39 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:48:40 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

t_rgb       create_rgb(int r, int g, int b)
{
    t_rgb   color;

    color.r = r;
    color.g = g;
    color.b = b;
    return (color);
}

unsigned int		RgbToInt(int r, int g, int b)
{
    return (unsigned int) ((r & 0xFF) << 16 | (g & 0xFF) << 8 | (b & 0xFF));
}

int 	convert_color(t_rgb color, double i)
{
    t_rgb c;

    c.r = (int)clamp(color.r * i, 0, 255);
    c.g = (int)clamp(color.g * i, 0, 255);
    c.b = (int)clamp(color.b * i, 0, 255);
//	printf("%d %d %d\n", c.r, c.g, c.b);
    return (RgbToInt(c.r, c.g, c.b));
}