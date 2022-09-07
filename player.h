#include <iostream>
#include <string>
#include <stdlib.h> 

#ifndef _PLAYER_
#define _PLAYER_

using namespace std;

class Player
{
private:
    int score;
    
public:
    // constructor with parameters. the game start from 0
    Player ()
    {
        score = 0;
    }
    void turn();
    int getScore() const{
        return score;
    }
    void resetScore()
    {
        score = 0;
    }
};

#endif
