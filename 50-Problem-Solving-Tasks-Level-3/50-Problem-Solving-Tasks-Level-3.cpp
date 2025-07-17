#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string ReadTextString() {
	string Text;
	cout << "Please enter your string ?\n";
	getline(cin, Text);
	return Text;
}


int CountString(string Text, short Char){
	int Counter = 0;
	for (int i = 0; i < Text.length(); i++)
	{
		if (Text[i] == Char) {
			Counter++;
		}
	}
	return Counter;
}




int main()
{

	string Text = ReadTextString();

	cout << endl;

	char CharToSearchFor;

	cout << "Please enter a character ? \n";
	cin >> CharToSearchFor;

	cout << "Letter \'" << CharToSearchFor << "\' Count = " << CountString(Text, CharToSearchFor) << endl;
	
	system("pause>0");
}