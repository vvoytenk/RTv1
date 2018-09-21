/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:48:49 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:48:51 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void            initSDL(t_rtv *r)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    r->win = SDL_CreateWindow("Woop Woop!",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              WID, HEI, SDL_WINDOW_OPENGL);
    r->surface = SDL_GetWindowSurface(r->win);
    r->buf = r->surface->pixels;

}

t_sphere        *init_sphere(double x, double y, double z, double r)
{
    t_sphere    *sphere;

    sphere = (t_sphere *)malloc(sizeof(t_sphere));
    sphere->pos = vec_new(x, y, z);
    sphere->radius = r;
    return (sphere);
}

t_plane         *init_plane(t_xyz point, t_xyz normal)
{
    t_plane     *plane;

    plane = (t_plane *)malloc(sizeof(t_plane));
    plane->normal = vec_norm(normal);
    plane->point = point;
    return (plane);
}

t_cone          *init_cone(t_xyz pos, t_xyz dir_c, double angle)
{
    t_cone      *cone;

    cone = (t_cone *)malloc(sizeof(t_cone));
    cone->angle = tan(angle);
    cone->dir = vec_norm(dir_c);
    cone->pos = pos;

    return(cone);
}

t_cylinder      *init_cylinder(t_xyz pos, t_xyz dir, double radius)
{
    t_cylinder  *cyl;

    cyl = (t_cylinder *)malloc(sizeof(t_cylinder));
    cyl->dir = vec_norm(dir);
    cyl->pos = pos;
    cyl->radius = radius;
    return(cyl);
}