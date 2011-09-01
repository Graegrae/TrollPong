/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * PingPong
 * Copyright (C)  2011 <graeme@clyde>
 * 
 */

#ifndef _SCORE_H_
#define _SCORE_H_
#include <cstdio>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include "main_func.h"

class score
{
public:
	score();
	score(TTF_Font*,SDL_Color,int,int);
	void incrementScore();
	void resetScore();
	void genSurface();
	void apply(SDL_Surface*);
	void set(TTF_Font*,SDL_Color,int,int);
	int getScore();

protected:

private:
	int value, x, y;
	char strvalue[32];
	SDL_Surface* surface;
	TTF_Font* font;
	SDL_Color textColour;

};

#endif // _SCORE_H_
