/******************
 * Program: cafeteria.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for cafeteria class
*******************/
#ifndef CAFETERIA_H
#define CAFETERIA_H
#include "space.hpp"
#include <string>
using std::string;

class Cafeteria : public Space
{
    private:
    public:
        Cafeteria();
        void interaction();
};

#endif