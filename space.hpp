/******************
 * Program: space.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for space class
*******************/
#ifndef SPACE_H
#define SPACE_H
#include "scientist.hpp"
#include <string>
using std::string;

class Space
{
    protected:
        Space* top;
        Space* left;
        Space* right;
        Space* bottom;
        string type;
        int searched;
        int roomNum;
        Scientist* player;

    public:
        Space();
        void setType(string);
        string getType();
        void setPointers(Space* l, Space* r, Space* t,Space* b);
        Space* getNext();
        Space* getPrev();
        Space* getTop();
        Space* getBottom();
        void set_Player_In_Room(Scientist* player);
        int getSearched();
        virtual void interaction() = 0;
        void enterRoom();
        void leaveRoom();
        void setRoomNum(int);
        virtual ~Space();

};

#endif