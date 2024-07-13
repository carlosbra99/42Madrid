/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:06:12 by carlos            #+#    #+#             */
/*   Updated: 2024/07/13 12:35:22 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <libft.h>
# include <stdlib.h>
# include <stdbool.h>
# include <fcntl.h>

/* --POSITION STRUCT-- */
typedef struct s_position
{
    int y;
    int x;
}   t_position;

/* --MAP STRUCT-- */
typedef struct s_map
{
    int         fd;
    char        **map;
    char        **map_cpy;
    int         width;
    int         height;
    t_position  *player;
    t_position  *exit;
}   t_map;

/* --GAME STRUCT-- */
typedef struct s_game
{
    void    *mlx;
    void    *window;
    int     win_width;
    int     win_height;
    size_t  steps;
    int     items;
    bool    exit_open;
    t_map   *map;
}   t_game;

/* --GENERAL-- */
# define NO_GAME NULL
# define NO_MAP NULL
/* --HOOKS-- */
# define ON_DESTROY 17
# define ESC_KEY 53
# define W_KEY 13
# define A_KEY 0
# define S_KEY 1
# define D_KEY 2
/* --MAP-- */
# define EMPTY 48
# define WALL 49
# define ITEM 67
# define EXIT 69
# define PLAYER 80
/* --ASSETS-- */
/* --ERROR MESSAGES-- */
# define ERROR_DUP "The map has a duplicated exit or initial position\n"
# define ERROR_LACK "The map lacks an exit, an item or an initial position\n"
# define ERROR_SHAPE "The map has wrong shape\n"
# define ERROR_EMPTY "The map is empty\n"
# define ERROR_NOWALL "The map lacks a wall\n"
# define ERROR_NOPATH "The map lacks a valid path\n"
# define INVALID_MAP "Map is invalid or couldn't get initialized\n"
# define WRONG_NUM_ARGUMENTS "Invalid number of arguments\n"
# define INVALID_ARGUMENT "Invalid argument\n"
# define ERROR_MALLOC "There was an error allocating memory\n"
# define ERROR_IMG_READING "Image reading has failed\n"
# define ERROR_LIST "The enemies list initialization failed\n"

/* --PROTOTYPES-- */

#endif