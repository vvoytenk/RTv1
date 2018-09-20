/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:48:58 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/11 03:49:00 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

int main(int argc, char **argv)
{
    t_rtv r;
    int close_requested;

    close_requested = 0;
    if (argc == 2)
    {
        initSDL(&r);
        if (!(scene(argv[1], &r)))
            usage(r.error);
        SDL_UpdateWindowSurface(r.win);
        SDL_FreeSurface(r.surface);
        while (!close_requested) {
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT ||
                    event.key.keysym.scancode == SDL_SCANCODE_ESCAPE)
                    close_requested = 1;
                if (event.type == SDL_MOUSEBUTTONDOWN)
                    printf("x = %d, y = %d\n", event.button.x, event.button.y);
            }
        }
        SDL_DestroyWindow(r.win);
        SDL_Quit();
    }
    else
        usage(1);
    return (0);
}
