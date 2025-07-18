#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string ReadText() {
	string Text;
	cout << "Please enter your string ?\n";
	getline(cin,Text);
	return Text;
}

void PrintStringWord(string Text){
	for (int i = 0; i < Text.length(); i++)
	{
		if (Text[i] == ' ') {
			cout << endl;
		} 
		else {
			cout << Text[i];
		}
	}
}







int main()
{

	string Text = ReadText();

	cout << endl;
	
	cout << "Your string words are: " << endl;

	PrintStringWord(Text);

	cout << endl;
	
	
	system("pause>0");
}