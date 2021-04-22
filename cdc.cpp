/******************
 * Program: cdc.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for cdc class
*******************/
#include "cdc.hpp"
#include "office.hpp"
#include "hallway.hpp"
#include "cafeteria.hpp"
#include "treatmentroom.hpp"
#include "laboratory.hpp"


CDC::CDC()
{
    office = new Office;
    hallway1 = new Hallway;
    hallway2 = new Hallway;
    cafeteria = new Cafeteria;
    treatmentRoom1 = new TreatmentRoom;
    treatmentRoom2 = new TreatmentRoom;
    laboratory = new Laboratory;
    currentRoom = office;
}

void CDC::buildCDC(){

    //left,right,top,bottom
    office->setPointers(NULL, hallway1, NULL, NULL);
    office->setType("Office");

    hallway1->setPointers(office, NULL, cafeteria, NULL);
    hallway1->setType("Hallway");
    hallway1->setRoomNum(1);

    cafeteria->setPointers(NULL, NULL, hallway2, hallway1);
    cafeteria->setType("Cafeteria");

    hallway2->setPointers(NULL, treatmentRoom1, laboratory, cafeteria);
    hallway2->setType("Hallway");
    hallway2->setRoomNum(2);


    treatmentRoom1->setPointers(hallway2, treatmentRoom2, NULL, NULL);
    treatmentRoom1->setType("Treatment Room 1");
    treatmentRoom1->setRoomNum(1);

    treatmentRoom2->setPointers(treatmentRoom1, NULL, NULL, NULL);
    treatmentRoom2->setType("Treatment Room 2");
    treatmentRoom2->setRoomNum(2);

    laboratory->setPointers(NULL, NULL, NULL, hallway2);
    laboratory->setType("Laboratory");
    
}

void CDC::set_current_room(Space* room)
{
    currentRoom = room;
}

Space* CDC::get_current_room()
{
    return currentRoom;
}

CDC::~CDC()
{
    delete office;
    delete hallway1;
    delete cafeteria;
    delete hallway2;
    delete treatmentRoom1;
    delete treatmentRoom2;
    delete laboratory;
}