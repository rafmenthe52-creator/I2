/**
 * @brief It reads the game data from a file
 *
 * @file game_reader.h
 * @author Rafael Velasco-RV
 * @version 1.1
 * @date 04-02-2025
 * @copyright GNU Public License
 */

#ifndef GAME_READER_H
#define GAME_READER_H

#include <string.h>

#include "types.h"

struct _Game;

/**
 * @brief This function reads the space data from the file, adds the data to a struct of type space and then adds a pointer to that struct to the game(struct)
 * @author Rafael Velasco-RV
 *
 * @param game a pointer to the struct in which the spaces will be saved
 * @param filename a pointer to the name of the data file
 * @return the Status of the function, either OK or ERROR
 */
Status game_reader_load_spaces(struct _Game *game, char *filename);

/**
 * @brief This function reads the object data from the file, adds that data to a struct of type object and then adds a pointer to that struct to the game(struct)
 * @author Rafael Velasco-RV
 *
 * @param game a pointer to the struct in which the spaces will be saved
 * @param filename a pointer to the name of the data file
 * @return the Status of the function, either OK or ERROR
 */
Status game_reader_load_objects(struct _Game* game, char* filename);

/**
 * @brief This function reads the player data from the file, adds that data to a struct of type player and then adds a pointer to that struct to the game(struct)
 * @author Rafael Velasco-RV
 *
 * @param game a pointer to the struct in which the spaces will be saved
 * @param filename a pointer to the name of the data file
 * @return the Status of the function, either OK or ERROR
 */
Status game_reader_load_player(struct _Game* game, char* filename);


#endif