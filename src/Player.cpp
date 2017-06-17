#include "Player.h"
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

Player::Player(const string& name)
{
    Player::setName(name);

}

Player::~Player()
{
    cout << "Destruktor Aufruf für den Spieler " << getName() << endl;
}

string Player::getName() const
{
    return playerName;
}

void Player::setName(string name)
{
    playerName = name;
}

int Player::getLevel() const
{
    return level;
}

void Player::setLevel(int l)
{
    level = l;
}

int Player::getStrength() const
{
    return strength;
}

void Player::setStrength(int l)
{
    strength = l;
}

int Player::getIntelligence() const
{
    return intelligence;
}

void Player::setIntelligence(int l)
{
    intelligence = l;
}

int Player::getAgility() const
{
    return agility;
}

void Player::setAgility(int l)
{
    agility = l;
}

void Player::move()
{
    srand (time(NULL));
    int length = rand() % 20 + 7;
    for(int i=1; i<length; i++)
    {
        cout << "|";
        sleep(1);
    }
}

void Player::displayStatus()
{
    cout << "Name: " << getName() << std::endl;
    cout << "Current Level: " << getLevel() << std::endl;
    cout << "Strength: " << getStrength() << std::endl;
    cout << "Intelligence " << getIntelligence() << std::endl;
    cout << "Agility: " << getAgility() << std::endl;
}


