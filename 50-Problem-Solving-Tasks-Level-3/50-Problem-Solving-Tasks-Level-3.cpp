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

string LowerCaseAllString(string Text){
	bool IsFirstLetter = true;
	for (int i = 0; i < Text.length(); i++){
		
			Text[i] = tolower(Text[i]);
		}
	return Text;

}

string UpperCaseAllString(string Text) {
	bool IsFirstLetter = true;
	for (int i = 0; i < Text.length(); i++) {

		Text[i] = toupper(Text[i]);
	}
	return Text;

}




int main()
{

	string Text = ReadStringText();

	cout << endl;

	cout << "String After Upper: \n";
	cout << UpperCaseAllString(Text) << endl;

	cout << endl;

	cout << "String After Lower: \n";
	cout << LowerCaseAllString(Text) << endl;
	system("pause>0");
}