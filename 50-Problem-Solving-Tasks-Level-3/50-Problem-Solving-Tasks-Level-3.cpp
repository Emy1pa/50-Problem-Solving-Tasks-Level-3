#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;


string ReadText() {
	string Text;
	cout << "Please enter your string ?\n";
	getline(cin,Text);
	return Text;
}

string LeftSpaceTrim(string Text){
	for (int i = 0; i < Text.length(); i++)
	{
		if(Text[i] != ' ' ) {
			return Text.substr(i, Text.length() - i);
		}
	}
	return "";
}

string RightSpaceTrim(string Text) {
	for (int i = Text.length() - 1; i >= 0; i--)
	{
		if (Text[i] != ' ') {
			return Text.substr(0, i + 1);
		}
	}
	return "";
}

string Trim(string Text){
	return LeftSpaceTrim(RightSpaceTrim(Text));
}


int main()
{

	string Text = ReadText();

	cout << "Trim Left: " << LeftSpaceTrim(Text) << endl;
	cout << "Trim Right: " << RightSpaceTrim(Text) << endl;
	cout << "Trim: " << Trim(Text) << endl;


	cout << endl;


	
	
	system("pause>0");
}