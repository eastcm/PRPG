#include <string>
#include <stdlib.h>
#include <unistd.h>
#include "Player.h"
#include "Game.h"

using namespace std;

Game::Game()
{

    do
    {
        mainMenu = true;
        cout << "1 - Play\n";
        cout << "2 - Quit\n";
        cout << "Choose 1 or 2: ";
        char menuInput;
        cin >> menuInput;

        if(menuInput == '1')
        {
            play();
        }
        else if(menuInput == '2')
        {
            mainMenu = false;
        }
        else
        {
            cout << "Invalid Input\n";
        }
    }
    while(mainMenu);

}

void Game::play()
{

    cout << "Wie soll ihre Spielfigur heissen? ";
    string playerName;
    cin >> playerName;
    Player player("Christoph");

    cout << "Choose your class" << endl;
    cout << "\t(W)arrior" << endl;
    cout << "\t(R)anger" << endl;
    cout << "\t(M)age" << endl;


    bool isInClassSelection = true;
    do
    {
        cout << "Please chose your class: ";
        char cl;
        cin >> cl;


        if(cl == 'W')
        {
            player.setAgility(10);
            player.setStrength(15);
            player.setIntelligence(10);
            isInClassSelection = false;
        }
        else if(cl == 'R')
        {
            player.setAgility(15);
            player.setStrength(10);
            player.setIntelligence(10);
            isInClassSelection = false;
        }
        else if(cl == 'M')
        {
            player.setAgility(10);
            player.setStrength(10);
            player.setIntelligence(15);
            isInClassSelection = false;
        }
        else
        {
            cout << "Invalid input; Try again: ";
        }
    }
    while(isInClassSelection);

    cout << "Das Spiel startet jetzt..." << endl;

    turn(cin);

    sleep(2);

}

void Game::turn(istream& stream)
{
    int i;

    do
    {
        cout << "(1)Next turn" << endl;
        cout << "(2)Inventory" << endl;
        cout << "(3)Status" << endl;
        cout << "(4)Save Game" << endl;
        cout << "(5)Quit Game" << endl;
        stream >> i;

    }
    while(i != 0 && i < 5);

}

