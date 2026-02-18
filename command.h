/**
 * @brief It defines the command interpreter interface
 *
 * @file command.h
 * @author Adrian Covarrubias-AC
 * @version 0
 * @date 27-01-2025
 * @copyright GNU Public License
 */

#ifndef COMMAND_H
#define COMMAND_H

#include "types.h"

#define N_CMDT 2
#define N_CMD 7

typedef enum { CMDS, CMDL } CommandType;

typedef enum { NO_CMD = -1, UNKNOWN, EXIT, NEXT, BACK, TAKE, DROP, LEFT, RIGHT, ATTACK, CHAT} CommandCode;

typedef struct _Command Command;


/**
* @brief It initializates a new empty command
* @author Adrian Covarrubias-AC
* 
* @return It returns the new empty command, or NULL if something goes wrong
*/
Command* command_create();

/**
* @brief It destroys the command giving a NULL value
* @author Adrian Covarrubias-AC
*
* @param command a pointer to the struct Command
* @return OK, if everything goes well or ERROR if there was some mistake 
*/
Status command_destroy(Command* command);

/**
* @brief Sets the code of a Command structure.
* @author Adrian Covarrubias-AC
*
* @param command a pointer to the struct Command
* @param code CommandCode value representing the new command type to assign
* @return It returns newcommand if everything goes well, or Error if there is a mistake
*/
Status command_set_code(Command* command, CommandCode code);

/**
* @brief  Gets the code of a Command structure._Command
* @author Adrian Covarrubias-AC
*
* @param command a pointer to the struct Command
* @return It returns the newcode if everythin goes well, or NO_CMD if there is a mistake 
*/
CommandCode command_get_code(Command* command);

/**
* @brief Gets the player command to make an action
* @author Adrian Covarrubias-AC
*
* @param command a pointer to the struct Command
* @return it returns the function for each action 
*/
Status command_get_user_input(Command* command);

#endif
