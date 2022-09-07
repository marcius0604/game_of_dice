#include "player.h"
#include <iostream>
#include <string>
#include <stdlib.h>

#ifndef _GAME_
#define _GAME_

using namespace std;

class Game {
private:
    Game(){ } // empty constroctor
    static void showMenu();
public:
    static void run(size_t countTurns = 10); // player and computer have 10 rolls for dice
};

#endif
