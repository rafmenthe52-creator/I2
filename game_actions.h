/**
 * @brief It defines the game update interface
 *
 * @file game.h
 * @author Profesores PPROG
 * @version 0
 * @date 27-01-2025
 * @copyright GNU Public License
 */

#ifndef GAME_ACTIONS_H
#define GAME_ACTIONS_H

#include "command.h"
#include "game.h"
#include "types.h"


/**
* @brief it makes the action input by the player
* @author Adrian Covarrubias-AC
*
* @param game a pointer to the struct Game
* @param cmd a pointer to the struct Command
* @return return OK 
*/
Status game_actions_update(Game *game, Command *cmd);

#endif
