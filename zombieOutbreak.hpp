/******************
 * Program: zombieOutbreak.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for zombie outbreak class
*******************/
#ifndef ZOMBIEOUTBREAK_HPP
#define ZOMBIEOUTBREAK_HPP
#include "scientist.hpp"
#include "cdc.hpp"


class ZombieOutbreak
{
    private:
        Scientist* player;
        CDC building;
    public:
        ZombieOutbreak();
        void Intro();
        void play();
        ~ZombieOutbreak();
};

#endif