#include <iostream>
#include <string>

using namespace std;

string ReadStringText() {
	string Text;
	cout << "Please enter your String ?\n";
	getline(cin, Text);
	return Text;
}

void PrintFirstLetterOfEachWord(string Text){
	cout << "First Letters of this string: \n\n";
	for (int i = 0; i < Text.length(); i++){
		if (i == 0) {
			cout << Text[i] << endl;
			}
		else if(Text[i] == ' ') {
				cout << Text[i + 1] << endl;
			}
		
	}

}


int main()
{

	string Text = ReadStringText();
	PrintFirstLetterOfEachWord(Text);
	system("pause>0");
}