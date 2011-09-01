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

#include "ball.h"
#include "main_func.h"
#include <string>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"


/*--------------------------------------
 * Ball class functions here
 * 
 * ------------------------------------*/


ball::ball(string filepng, int imagex, int imagey, int framex, int framey)
{
	ballSurface = imageLoad(filepng);
	dx = dy = 0;
	x= (framex-imagex)/2;
	y= (framey-imagey)/2;
}

ball::ball()
{
	ballSurface = NULL;
	dx = dy = x = y = 0;
}


void ball::reverseDx()
{
	dx=-dx;
}

void ball::reverseDy()
{
	dy=-dy;
}

void ball::changeDx(int speed)
{
	dx=dx+speed;
}

void ball::changeDy(int speed)
{
	dx=dx+speed;
}

void ball::set(string filepng, int diam, int framex, int framey)
{
	ballSurface = imageLoad(filepng);
	dx = dy = 2;
	x= (framex-diam)/2;
	y= (framey-diam)/2;
}

/*
 *  int ball::getx();
 *	int ball::gety();
 *	SDL_Surface* ball::getSurface();
 *	int ball::getDx();
 *	int ball::getDy();
 */
void ball::apply(SDL_Surface* dest)
{
	ApplySurface (x,y,ballSurface,dest);
}

/*---------------------------------
 * Bat class functions start here
 *
 * -------------------------------*/

bat::bat()
{
	batSurface = NULL;
	dy = x = y = 0;
}

bat::bat(string filepng, int imagex, int imagey, int framex, int framey)
{
	batSurface = imageLoad(filepng);
	dy = 0;
	x= (framex-imagex)/2;
	y= (framey-imagey)/2;
}

void bat::moveup()
{

}
void bat::movedown()
{

}

void bat::set(string filepng, bool imagex, int imagey, int framex, int framey)
{
	batSurface = imageLoad(filepng);
	dy = 0;
	if (imagex)
		x=32;
	else
		x=framex-32;
	y= (framey-imagey)/2;
}

void bat::apply(SDL_Surface* dest)
{
	ApplySurface (x,y,batSurface,dest);
}





