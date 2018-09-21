/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:49:07 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:49:08 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV_RTV_H
#define RTV_RTV_H

# include "libft/libft.h"

# include <stdio.h> /********************************************************/

# include <math.h>
# include <SDL2/SDL.h>

#include <SDL2/SDL.h>

#define WID 1000
#define HEI 1000
#define MIN 1
#define MAX INFINITY

typedef struct      s_xyz
{
    double          x;
    double          y;
    double          z;
}                   t_xyz;

typedef struct      s_rgb
{
    int             r;
    int             g;
    int             b;
}                   t_rgb;

typedef struct      s_plane
{
	t_xyz			normal;
	t_xyz			point;
}                   t_plane;

typedef struct      s_cone
{
    t_xyz           pos;
    t_xyz           dir;
    double          angle;
}                   t_cone;

typedef struct      s_cylinder
{
    t_xyz           pos;
    t_xyz           dir;
    double          radius;
}                   t_cylinder;

typedef struct      s_sphere
{
    t_xyz           pos;
    double          radius;
}                   t_sphere;

/* light:
 *          0 - point
 *          1 - ambient
 *          2 - directional
 *
 *          i - intensity
 *          d - direction
 */

typedef struct     s_light
{
    double          i;
    t_xyz           pos;
    t_xyz           d;
}                   t_light;

typedef struct      s_object
{
    void            *data;
    int             type;
    t_rgb           color;
    double          specular;
    t_xyz           intersect;
    t_xyz           normal;
    double          t_max;
    double			t_min;
}                   t_object;

typedef struct      s_cam
{
    t_xyz           pos;
}                   t_cam;

typedef struct      s_scene
{
    t_object        obj[4];
    t_light         light[3];
    t_cam           cam;
    t_object        *tmp;
}                   t_scene;

typedef struct      s_rtv
{
    SDL_Window      *win;
    SDL_Surface     *surface;
    t_scene         scene;
    int             *buf;
    int             error;
}                   t_rtv;

/*******************INIT*******************/

void                initSDL(t_rtv *r);
void                init_obj1(t_object *obj1);
void                init_cam1(t_cam *cam1);
void                init_light1(t_light *light);
t_sphere            *init_sphere(double x, double y, double z, double r);
t_plane         	*init_plane(t_xyz point, t_xyz normal);
t_cone              *init_cone(t_xyz pos, t_xyz dir_c, double angle);
t_cylinder          *init_cylinder(t_xyz pos, t_xyz dir, double radius);
void				init_light2(t_light    *light);
void				init_cam2(t_cam *cam2);
void				init_obj2(t_object *obj2);
void                init_obj3(t_object *obj2);
void                init_cam3(t_cam *cam2);
void                init_light3(t_light    *light);
void                init_obj4(t_object *obj2);
void                init_cam4(t_cam *cam4);
void                init_light4(t_light    *light);

/*******************SCENE******************/

int                 scene(char *arg, t_rtv *r);
int                 scene1(t_rtv *r);
int					scene2(t_rtv *r);
int                 scene3(t_rtv *r);
int                 scene4(t_rtv *r);



/*******************OTHER******************/

void	            usage(int error);
t_xyz               convert(int x, int y);
double              clamp(double v, double lb, double ub);


/******************COLOR*******************/

t_rgb               create_rgb(int r, int g, int b);
unsigned int		RgbToInt(int r, int g, int b);
int					get_color(t_object *obj, t_xyz d, t_rtv *r, double closest_t);
int                 get_color_sphere(t_object *obj, t_xyz d, t_rtv *r, double closest_t);
int					get_color_plane(t_object *obj, t_xyz d, t_rtv *r, double closest_t);
int                 get_color_cone(t_object *obj, t_xyz d, t_rtv *r, double closest_t);
int                  get_color_cylinder(t_object *obj, t_xyz d, t_rtv *r, double closest_t);
int                 convert_color(t_rgb color, double i);


/*****************VECTORS******************/

t_xyz				vec_dif(t_xyz v1, t_xyz v2);
t_xyz               vec_sum(t_xyz v1, t_xyz v2);
double              vec_scalar(t_xyz v1, t_xyz v2);
t_xyz               vec_mult(double k, t_xyz v);
double              vec_len(t_xyz v);
t_xyz               vec_new(double x, double y, double z);
t_xyz               vec_div(t_xyz v, double k);
t_xyz				vec_norm(t_xyz v);

/*****************RAY_TRACE****************/

int                 render(t_rtv *r);
double              closest_intersect(t_rtv *r, t_xyz dir);
int                 trace_ray(t_rtv *r, t_xyz dir);
void 		        intersect_sphere(t_rtv *r, t_xyz d, t_object *obj, double *closest_t);
void				intersect_plane(t_rtv *r, t_xyz dir, t_object *obj, double *closest_t);
void                intersect_cone(t_rtv *r, t_xyz dir, t_object *obj, double *closest_t);
void                intersect_cylinder(t_rtv *r, t_xyz d, t_object *obj, double *closest_t);
double              lightning_sp(t_xyz d, t_rtv *r, t_object *obj);


#endif
