/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 16:22:38 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/07/30 16:22:41 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

t_xyz		vec_dif(t_xyz v1, t_xyz v2)
{
	t_xyz	v3;
	v3.x = v1.x - v2.x;
	v3.y = v1.y - v2.y;
	v3.z = v1.z - v2.z;
	return (v3);
}

t_xyz		vec_sum(t_xyz v1, t_xyz v2)
{
	t_xyz	v3;
	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	v3.z = v1.z + v2.z;
	return (v3);
}

double		vec_scalar(t_xyz v1, t_xyz v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

t_xyz		vec_mult(double k, t_xyz v)
{
	t_xyz	res;

	res.x = k * v.x;
	res.y = k * v.y;
	res.z = k * v.z;
	return(res);
}

double		vec_len(t_xyz v)
{
	return(sqrt(vec_scalar(v, v)));	
}

t_xyz		vec_new(double x, double y, double z)
{
	t_xyz	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return(v);
}

t_xyz		vec_div(t_xyz v, double k)
{
    t_xyz	res;

    res.x = v.x / k;
    res.y = v.y / k;
    res.z = v.z / k;
    return(res);
}

t_xyz		vec_norm(t_xyz v)
{
	t_xyz	norm;

	norm = vec_div(v, vec_len(v));
	return (norm);
}