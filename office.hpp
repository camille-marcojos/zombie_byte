/******************
 * Program: Office.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for office class
*******************/
#ifndef OFFICE_H
#define OFFICE_H
#include "space.hpp"
#include <string>
using std::string;

class Office : public Space
{
    private:
    public:
        Office();
        void interaction();
};

#endif