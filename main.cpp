/******************
 * Program: Final Project - Zombie Byte
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: My final project is a zombie apocalypse game.
 * Citation for journal entry: Developing a Zombie Vaccine, http://www.thepumphandle.org/2010/07/01/developing-a-zombie-vaccine/#.XfB94ZNKjUp
*******************/
#include <iostream>
#include "zombieOutbreak.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    unsigned seed;
    seed = time(0);
    srand(seed);
    
    ZombieOutbreak game;
    game.play();

    return 0;
}