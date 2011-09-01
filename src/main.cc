#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include <string>
#include "ball.h"
#include "main_func.h"
#include <iostream>
#include "score.h"
#include <cstdio>

using namespace std;


const int SCREEN_WIDTH=640;
const int SCREEN_HEIGHT=480;
const int SCREEN_BPP=32;

const string BACKGROUND="data/background.png";
const string BATPNG="data/bat.png";
const string BALLPNG="data/ball.png";
const string FONTFILE="data/cube.ttf";
const int BATX=6 ;
const int BATY=40 ;
const int BALLDIAM=12;
const SDL_Color WHITE = { 255, 255, 255 };

bool quit=false;

TTF_Font* font = NULL;
SDL_Surface* screen = NULL;
SDL_Surface* background = NULL;
ball ball1;
bat bat1, bat2;
score player1, player2;
SDL_Surface* textTestSurface = NULL;

SDL_Event event;


bool init();
bool firstItems();
void applyallSurfaces();

int main(int argc, char** argv)
{
	if (!init())
		return 1;
	if (firstItems()==false)
		return 1;

	
	
	while (quit==false)
	{
		if (SDL_PollEvent ( &event))
		    {
				if (event.type == SDL_QUIT)
					quit = true;
			}
		applyallSurfaces();
		SDL_Flip (screen);
		
	}
		


	
	return 0;
}

bool init() {

	if (SDL_Init(SDL_INIT_EVERYTHING) !=0)
		return false;

	if (TTF_Init () != 0)
		return false;

	screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );

	if ( screen == NULL)
	{
		cout << "Error getting screen" << endl;
		return false;
	}

	font = TTF_OpenFont (FONTFILE.c_str(), 24);
	if ( font == NULL)
	{
		cout << "Error opening font" << endl;
		return false;
	}

	SDL_WM_SetCaption ( "Troll Pong", NULL );

	return true;

}



bool firstItems()
{
	bat1.set(BATPNG, true, BATY, SCREEN_WIDTH, SCREEN_HEIGHT);
	bat2.set(BATPNG, false, BATY, SCREEN_WIDTH, SCREEN_HEIGHT);
	ball1.set(BALLPNG, BALLDIAM, SCREEN_WIDTH, SCREEN_HEIGHT);
	background = imageLoad(BACKGROUND);
	player1.set(font,WHITE,70,30);
	player1.genSurface ();
	player2.set(font,WHITE,SCREEN_WIDTH-110, 30);
	player2.genSurface ();
	
	
	

	return true;
}

void applyallSurfaces()
{	
	ApplySurface(0,0,background,screen);
	bat1.apply(screen);
	bat2.apply(screen);
	ball1.apply(screen);
	player1.apply(screen);
	player2.apply(screen);
	
}


