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



bool CheckIfIsVowel(char Letter){
	Letter = tolower(Letter);
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));

}

void PrintAllVowels(string Text){
	for (int i = 0; i < Text.length(); i++)
	{
		if (CheckIfIsVowel(Text[i])) {
			cout << Text[i] << " ";
		}
	}
}



int main()
{

	string Text = ReadText();

	cout << endl;
	cout << "Vowels in string are: \n";
	PrintAllVowels(Text);

	cout << endl;
	
	
	system("pause>0");
}