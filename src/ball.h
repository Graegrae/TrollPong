/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * PingPong
 * Copyright (C)  2011 <graeme@clyde>
 * 
 * PingPong is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * PingPong is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BALL_H_
#define _BALL_H_
#include "main_func.h"
#include <string>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"



class ball
{
public:

	ball();
	ball(string, int, int, int, int);
	void reverseDx();
	void reverseDy();
	void changeDx(int);
	void changeDy(int);
	void set(string, int, int, int);
	/*int getx();
	int gety();
	SDL_Surface* getSurface();
	int getDx();
	int getDy();
	*/
	void apply(SDL_Surface*);

protected:

private:
	SDL_Surface* ballSurface;
	int x, y, dx, dy;

};

class bat
{
public:
	bat();
	bat(string, int, int, int, int);
	void moveup();
	void movedown();
	void set(string, bool, int, int, int);
	void apply(SDL_Surface*);
	
private:
	int x, y, dy;
	SDL_Surface* batSurface;
};

#endif // _BALL_H_
