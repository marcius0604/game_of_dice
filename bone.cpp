#include <stdio.h>
#include "bone.h"


using namespace std;

// draw function is responsible to show design of dice sides
void Bone::draw(size_t dice)
{
    switch (dice)
    {
        case 1:
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|           |" << endl;
            cout << "|     0     |" << endl;
            cout << "|           |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
            break;
        case 2:
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|     0     |" << endl;
            cout << "|           |" << endl;
            cout << "|     0     |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
            break;
        case 3:
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|     0     |" << endl;
            cout << "|     0     |" << endl;
            cout << "|     0     |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
            break;
        case 4:
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|           |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
            break;
        case 5:
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|     0     |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
            break;
        case 6:
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|  0     0  |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
            break;
        default:
            cout << "THIS SIDE OF DICE DOES NOT EXIST" << endl;
            break;
    }
}
