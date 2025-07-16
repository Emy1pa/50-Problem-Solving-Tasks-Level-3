#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadStringText() {
	string Text;
	cout << "Please enter your String ?\n";
	getline(cin, Text);
	return Text;
}

string UppercaseFirstLetterOfEachWord(string Text){
	bool IsFirstLetter = true;
	for (int i = 0; i < Text.length(); i++){
		if (Text[i] != ' ' && IsFirstLetter) {
			Text[i] = toupper(Text[i]);
		}
		IsFirstLetter = (Text[i] == ' ' ? true : false);
	}
	return Text;

}



int main()
{

	string Text = ReadStringText();
	cout << UppercaseFirstLetterOfEachWord(Text);
	system("pause>0");
}