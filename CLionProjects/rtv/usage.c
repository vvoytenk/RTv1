/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:49:39 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:49:40 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void	usage(int error)
{
    if (error == 1)
        ft_putstr("USAGE:\n\t1 - scene 1;\n\t2 - scene 2;\n\t3 - scene 3.\n");
    exit(1);
}
