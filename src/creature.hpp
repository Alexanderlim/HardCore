#ifndef CREATURE_HPP
#define CREATURE_HPP


#include <string>

using namespace std;

class Creature
{
    // Creature Info
    string name;
    string className;
    
    // Creature Stats
    int health;
    int maxHealth;
    int str;
    int end;
    int dex;
    unsigned int level;
    unsigned int exp;

public:
    
    Creature(string nm, int hp, int s, int e, int d,
             unsigned int lvl = 1, unsigned int xp = 0, string className = "")
    {
        name = nm;
        health = hp;
        maxHealth = hp;
        str = s;
        end = e;
        dex = d;
        level = lvl;
        exp = xp;
    }
    
    Creature()
    {
        level = 1;
        exp = 0;
    }
    
    
};

#endif
