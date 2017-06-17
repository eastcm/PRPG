#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>

class Game
{
public:
    Game();
private:
    bool mainMenu;
    void play();
    void turn(std::istream& stream);
};


#endif // GAME_H_INCLUDED
