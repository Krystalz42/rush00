//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __FT_RETRO_H
#define __FT_RETRO_H

#define EMPTY ' '
#define MOB_BULLET '|'
#define PLAYER_BULLET 'o'
#define PLAYER_BULLET_VERTIC 'v'
#define PLAYER_DOT '.'
#define RED  1
#define CYAN  2
#define MAGENTA  3
#define GREEN  4
#define BLACK 5
#define YELLOW 6

enum Move {
	NORTH,
	SOUTH,
	EAST,
	WEST,
	NORTHWEST,
	NORTHEAST,
	SOUTHEAST,
	SOUTHWEST,
	NONE
};


#endif //__FT_RETRO_H
