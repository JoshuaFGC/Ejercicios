#ifndef ProfileLinkedin_
#define ProfileLinkedin_

#include <iostream>
#include "INodo.h"

using namespace std;

class ProfileLinkedin : public INodo{
private:
    int id = 0;
    string name;
public:
    ProfileLinkedin(){
        this->id = id + 1;
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




#endif