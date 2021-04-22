/******************
 * Program: cdc.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for cdc class
*******************/
#ifndef CDC_H
#define CDC_H
#include "space.hpp"

class CDC
{
    private:
        Space* office;
        Space* hallway1;
        Space* hallway2;
        Space* cafeteria;
        Space* treatmentRoom1;
        Space* treatmentRoom2;
        Space* laboratory;
        Space* currentRoom;
    public:
        CDC();
        void buildCDC();
        void set_current_room(Space*);
        Space* get_current_room();
        ~CDC();
};

#endif