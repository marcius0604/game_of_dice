#include <iostream>
#include <string>
#include <stdlib.h>

#ifndef _BONE_
#define _BONE_

using namespace std;

class Bone
{
private:
    Bone(){}
public:
    static void draw(size_t dice); // static one copy created and available till entire the program
};

#endif
