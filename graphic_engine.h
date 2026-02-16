/**
 * @brief It defines the textual graphic engine interface
 *
 * @file graphic_engine.h
 * @author Profesores PPROG
 * @version 0
 * @date 27-01-2025
 * @copyright GNU Public License
 */

#ifndef GRAPHIC_ENGINE_H
#define GRAPHIC_ENGINE_H

#include "game.h"

typedef struct _Graphic_engine Graphic_engine;

/**
* @brief creates a struct of type Graphic_engine and calls diferent functions in libscreen to initialize the screen
* @author Profesores Pprog
*
* @return it returns the pointer to a struct of type Graphic_engine, or NULL if something goes wrong 
*/
Graphic_engine *graphic_engine_create();

/**
* @brief calls functions in libscreen to delete everything that was initialized in create and then deletes the struct of type Graphic_engine
* @author Profesores Pprog
*
* @return void, no return
*/
void graphic_engine_destroy(Graphic_engine *ge);

/**
* @brief This function is the one responsible for the printing on screen of the game.
* @author Profesores Pprog
*
* @return 
*/
void graphic_engine_paint_game(Graphic_engine *ge, Game *game);

#endif
