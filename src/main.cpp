

#include "dialogue.hpp"
#include "creature.hpp"



#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

// Creature player;


Dialogue dialogue;
vector<string> choices;

void save() {
    ofstream fout ("test");
    
    fout << 1 << 2 << "test" << endl;
    
    cout << "Save Successful" << endl;
}

void load() {
    ifstream fin ("test");

    int a, b;
    fin >> a >> b;
    cerr << a << b << endl;
    
    cout << "Load Successful" << endl;
}

int startGame() {
    int command;
    
    command = Dialogue("Main Menu", {"New Game", "Load Game", "Etc"}).activate();
    
    switch (command) {
        case 1: // New Game
            break;
        case 2: // Load Game
            load();
            break;
        case 3: // Any Other options ie credits
            break;
        default:
            return 0;
            break;
    }
    return 1;
    
}



int main(int argc, const char* argv[])
{
    int command;
    
    // Main Loop
    while (cin) {
        
        startGame();
        
        
    }
    
    
    
    return 0;
}