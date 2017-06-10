#include "Player.h"
#include <unistd.h>
#include <time.h>
#include <string>


Player::Player(const std::string& name)
{
    Player::setName(name);

}

Player::~Player()
{
    std::cout << "Destruktor Aufruf für den Spieler " << getName() << std::endl;
}

std::string Player::getName() const
{
    return playerName;
}

void Player::setName(std::string name)
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
        std::cout << "|";
        sleep(1);
    }
}

void Player::displayStatus()
{
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Current Level: " << getLevel() << std::endl;
    std::cout << "Strength: " << getStrength() << std::endl;
    std::cout << "Intelligence " << getIntelligence() << std::endl;
    std::cout << "Agility: " << getAgility() << std::endl;
}


