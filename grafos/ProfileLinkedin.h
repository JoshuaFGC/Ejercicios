#ifndef ProfileLinkedin_
#define ProfileLinkedin_

#include <iostream>
#include "INodo.h"

using namespace std;

class ProfileLinkedin : public INodo{
private:
    static int nextID;
    int id;
    string name;
public:
    ProfileLinkedin(){
        this->id = nextID++;
    }

    void setName(string pName){
        this->name = pName;
    }

    int getId(){
        return this->id;
    }

    string getName(){
        return this->name;
    }
};

int ProfileLinkedin::nextID = 1;


#endif