/**
 * @file prototype_tictactoe.h
 * 
 * @author Vikram Vasudev
 * 
 * @brief This is a tic tac toe game
 * 
 * @version 0.1
 * 
 * @date 2021-04-13
 * 
 * 
 * 
 */


#ifndef __PROTOTYPE_TICTACTOE_H__
#define __PROTOTYPE_TICTACTOE_H__


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<windows.h>
				
/**
 * @brief Character array to create the tictactoe grid
 * 
 */
char square[10]= {'o','1','2','3','4','5','6','7','8','9'};

/**
 * @brief To check the winner and display
 * 
 * @return int 
 */
int checkWin();

/**
 * @brief To draw the 3x3 grid
 * 
 */
void drawBoard();

#endif

