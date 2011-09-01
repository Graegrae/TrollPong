/***************************************************************************
 *            main_func.h
 *
 *  Functions for main specified here
 *   
 *  
 ****************************************************************************/
#ifndef H_main_func
#define H_main_func

#include <string>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

using namespace std;

SDL_Surface* imageLoad(string filename);	/* Loads optimized image of any image format.
 											Returning a pointer to the loaded SDL_Surface */
void ApplySurface(int x, int y, SDL_Surface* source, SDL_Surface* dest); 
											/* Applies one surface onto another at given
 											co-ordinates */


#endif