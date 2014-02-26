#ifndef battle_hpp
#define battle_hpp

#include "dialogue.hpp"
#include "creature.hpp"

#include <iostream>
#include <vector>

using namespace std;

class Battle
{
    Dialogue dialogue;
    
    Creature* creatures[2];

public:
    
    Battle() {}
    
    Battle(Creature* player, Creature* enemy)
    {
        creatures[0] = player;
        creatures[1] = enemy;
        
        dialogue = Dialogue("What will you do?",
                            {"Attack", "Defend", "Flee"});
        
    }
    
    void run()
    {
        cout << creatures[1]->name << " appears!" << endl;
        
        while (!activate());
        
    }
    
    // Runs ONE round of the battle
    bool activate()
    {
        // Check to see who attacks first
        // Run each turn - checking if defender is dead at end of attacker turn
    }
    
    void playerTurn()
    {
        int userInput = dialogue.activate();
        
        switch (userInput)
        {
            case 1:
                attack(creatures[0], creatures[1]);
                break;
            case 2:
                defend(creatures[0]);
                break;
            case 3:
                flee();
                break;
            default:
                break;
        }
        
        return;
        
    }
    
    void enemyTurn()
    {
        attack(creatures[1], creatures[0]);
        
        return;
    }
    
    void attack(Creature* attacker, Creature* defender)
    {
        cout << attacker->name << " attacks!" << endl;
        
        int damage = 0;
        
        cout << defender->name << " takes " << damage << " damage!" << endl;
        defender->health -= damage;
        
    }
    
    void defend(Creature* defending)
    {
        // Does nothing at the moment, implement later
        cout << defending->name << " defends!" << endl;
    }
    
    void flee()
    {
        // Figure out way to implement running away
    }
    
    
};

#endif