#include <iostream>
#include <stdlib.h>
#include "game.h"

using namespace std;

int main()
{
    // variable to choose other menu option window
    int p;
    
    cout << "\t\t  **** WELCOME TO DICE GAME ****\n" << endl << endl;

    
    Game::run();

    cout << "\n";
    cout << "\t\t 5 - REPEAT THE GAME.  6 - EXIT" << endl << endl;
    cout << "Your OPTION: ";
    cin >> p;
    
    while (p != 6)
    {
        if (p == 5) // resume/start a new game
        {
            system ("cls"); // clean the screen
            
        }
        
        if (p == 6) // finish the game
        {
            break;
        }
        
        // if player press other number than 5 or 6 it shows error window
        else
        {
            cout << endl;
            cout << "\t\t -----------------------------" << endl;
            cout << "\t\t |  ERROR! CHOOSE [5] OR [6] |" << endl;
            cout << "\t\t -----------------------------" << endl;
            cin >> p;
            cout << endl;
    
        }
    }
    
    return 0;
}
