#ifndef DIALOGUE_HPP
#define DIALOGUE_HPP

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Dialogue
{
	private:
		string description;
		vector<string> choices;

	public:
		Dialogue() {}
		Dialogue(string text, vector<string> options)
		{
			description = text;
			choices = options;
		}

		int activate()
		{
			int userInput;

			cout << description << endl;

			for (int i = 0; i < choices.size(); i++)
			{
				cout << i+1 << ": " << choices[i] << endl;
			}

			while (true)
			{
				cin >> userInput;

				if (userInput >= 0 && userInput <= choices.size())
				{
					return userInput;
				}
			}
			
			return 0;
		}
};

#endif
