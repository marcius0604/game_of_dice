#include <stdio.h>
#include "player.h"
#include "bone.h"

using namespace std;

void Player::turn()
{
    int scoreTurn = rand() % 6 + 1; // function take random numbers from 1 to 6
    score += scoreTurn;
    Bone::draw(scoreTurn); // functon draw take one of that random number and show the dice side which is = to that number
    
}
