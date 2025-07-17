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


void PrintStringLength(string Text){
	cout << "String Length = " << Text.length() << endl;
}

int PrintSmallLettersCount(string Text){
	int Counter = 0;

	for (int i = 0; i < Text.length(); i++)
	{
		if (isupper(Text[i])) {
			Counter++;
		}
	}
	return Counter;
}

int PrintCapitalLettersCount(string Text) {
	int Counter = 0;

	for (int i = 0; i < Text.length(); i++)
	{
		if (islower(Text[i])) {
			Counter++;
		}
	}
	return Counter;
}





int main()
{

	string Text = ReadTextString();

	cout << endl;

	PrintStringLength(Text);
	
	cout << "Capital Letters Count = " << PrintCapitalLettersCount(Text) << endl;

	cout << "Small Letters Count = " << PrintSmallLettersCount(Text) << endl;
	system("pause>0");
}