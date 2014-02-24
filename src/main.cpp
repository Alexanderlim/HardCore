

#include "dialogue.hpp"



#include <iostream>
#include <vector>
#include <string>


using namespace std;

Dialogue dialogue;
vector<string> choices;

int main(int argc, const char* argv[])
{
    // Testing out the Dialogue class
    choices.push_back("Option 1");
    choices.push_back("Option 2");
    dialogue = Dialogue("Hello World", choices);
    dialogue.activate();	

    cout << "Hello World\n";
    return 0;

