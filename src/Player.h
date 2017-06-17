#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>

class Player
{
private:
    int experience;
    std::string playerName;
    int level;
    int currentHealthPoints;
    int maximumHealthPoints;
    int strength;
    int agility;
    int intelligence;

    void setName(std::string name);
public:
    Player(const std::string& name);
    ~Player();

    std::string getName() const;

    int getLevel() const;
    void setLevel(int newLevel);

    int getAgility() const;
    void setAgility(int agility);

    int getStrength() const;
    void setStrength(int strength);

    int getIntelligence() const;
    void setIntelligence(int intelligence);

    void move();
    void displayStatus();

};

#endif // PLAYER_H_INCLUDED
