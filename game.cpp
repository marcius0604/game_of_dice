#include "game.h"
#include "player.h"

using namespace std;

//menu function
void Game::showMenu()
{
    cout << "\t\t\t ##################################" << endl;
    cout << "\t\t\t #                                #" << endl;
    cout << "\t\t\t #          GAME MENU             #" << endl;
    cout << "\t\t\t #--------------------------------#" << endl;
    cout << "\t\t\t #  1 - ROLL THE DICE             #" << endl;
    cout << "\t\t\t #  2 - RESULT                    #" << endl;
    cout << "\t\t\t #  3 - RULES                     #" << endl;
    cout << "\t\t\t #  4 - EXIT                      #" << endl;
    cout << "\t\t\t #                                #" << endl;
    cout << "\t\t\t ##################################" << endl << endl << endl;
}
// function run is responsible for menu, result, rules, errors screen shows, as well show the winner
void Game::run(size_t countTurns)
{
    Player player1;
    Player player2;
    
    short itemMenu = 0;
    
    size_t currentTurn = 0; // size_t is unsigned number and it is using when isn't necessary negative number
    
    showMenu(); // shows the game menu
     
    // menu options
    while (currentTurn < countTurns)
    {
        cout << endl;
        cout << " TO CHOOSE AN OPTION: ";
        cin >> itemMenu;
        cout << endl;
        
        switch (itemMenu)
        {
            // roll the dices and show the result after each roll
            case 1:
                cout << "YOUR TURN: " << endl;
                cout << endl;
                player1.turn();
                cout << endl;
                cout << "COMPUTER TURN: " << endl;
                cout << endl;
                player2.turn();
                ++currentTurn;
                break;
            // show the current result
            case 2:
                cout << "YOUR RESULT: " << player1.getScore() << endl;
                cout << endl;
                cout << "COMPUTER RESULT: " << player2.getScore() << endl;
                cout << endl;
            // show the game rules
            case 3:
                cout << "\t\t\t    THE RULES OF GAME:  " << endl << endl;
                cout << "###############################################################" << endl;
                cout << "#IN THE GAME IS 10 ROLLS. YOUR AND COMPUTER ROLL DICES 10 TIMES#" << endl;
                cout << "#         IF YOU WANT TO ROLL DICE PRESS [1]                   #" << endl;
                cout << "#          COMPUTER ROLL DICE AUTOMATICLY                      #" << endl;
                cout << "#    WINNER IS WITH THE HIGEST SUM SCORE PER 10 TIMES          #" << endl;
                cout << "#  IF YOU WANT TO SEE THE CURRENT RESULT, PRESS  [2]           #" << endl;
                cout << "#  IF YOU WANT FINISH THE GAME, PRESS  [4]                     #" << endl;
                break;
            // exit the game
            case 4:
                cout << endl;
                cout << "\t\t\t... << GAME END >> ..." << endl << endl;
                return;
                break;
            // if player try to choose other option the program shows an error and requit to take correct option
            default:
                cout << "\t____________________________________________________" << endl;
                cout << "\t|                                                  | " << endl;
                cout << "\t|  ERROR!  CHOOSE [1], [2], [3] OR [4] MENU OPTION | " << endl;
                cout << "\t|__________________________________________________| " << endl;
                cout << endl << endl;
                                                                    
                break;
        }
        
        showMenu();
    }
         // total result
                                  
        cout << endl;
        cout << "Your total result: " << player1.getScore() << endl;
        cout << "Computer total result: " << player2.getScore() << endl;
        cout << endl << endl;
        
                                  
        // if your result is bigger than computer it show " you win
        if(player1.getScore() > player2.getScore())
        {
            cout << "\t           ------------------------------        " << endl;
            cout << "\t   <$$$$$> |           YOU WIN!        | <$$$$$>" << endl;
            cout << "\t           ------------------------------        " << endl;
        }
        // else if shows "you lose"
        else if(player1.getScore() < player2.getScore())
        {
            cout << "\t           ------------------------------        " << endl;
            cout << "\t   <$$$$$> |         YOUR LOSE          | <$$$$$>" << endl;
            cout << "\t           ------------------------------        " << endl;
        }
        // else shows if its draw
        else
        {
            cout << "\t           ------------------------------        " << endl;
            cout << "\t   <$$$$$> |           DRAW             | <$$$$$>" << endl;
            cout << "\t           ------------------------------        " << endl << endl;
        }
}
