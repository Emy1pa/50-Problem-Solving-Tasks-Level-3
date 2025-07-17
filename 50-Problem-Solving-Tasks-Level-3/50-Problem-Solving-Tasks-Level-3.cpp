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

int CheckNumberOfVowels(string Text){
	int Counter = 0;
	for (int i = 0; i < Text.length(); i++)
	{
		if (CheckIfIsVowel(Text[i])) {
			Counter++;
		}
	}
	return Counter;
}



int main()
{

	string Text = ReadText();

	cout << endl;
	cout << "Number of vowels is: " << CheckNumberOfVowels(Text);
	

	
	
	system("pause>0");
}