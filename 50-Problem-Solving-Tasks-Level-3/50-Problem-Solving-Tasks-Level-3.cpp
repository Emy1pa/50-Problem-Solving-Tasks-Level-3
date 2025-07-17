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


string InvertAllLettersCase(string Text){
	for (int i = 0; i < Text.length(); i++)
	{
		if (isupper(Text[i])) {
			Text[i] = tolower(Text[i]);
		}
		else {
			Text[i] = toupper(Text[i]);
		}
	}
	return Text;
}



int main()
{

	string Text = ReadTextString();

	cout << endl;

	cout << "String after Inverting All Letters Case \n";

	cout << InvertAllLettersCase(Text);
	
	system("pause>0");
}