/******************
 * Program: menu.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for menu functions
*******************/
#ifndef MENU_H
#define MENU_H
#include <string>
using std::string;

int getMenuChoice();
bool is_int(string choice);
int twoChoiceMenu();
void replayMenu();
void entertoContinue();
int getNum();

#endif