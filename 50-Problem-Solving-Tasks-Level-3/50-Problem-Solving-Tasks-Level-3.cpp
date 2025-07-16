#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadCharLetter() {
	char Letter;
	cout << "Please enter a character ?\n";
	cin >> Letter;
	return Letter;
}


char InvertCase(char Character){
	if (isupper(Character))
		return tolower(Character);
	else
		return toupper(Character);
}



int main()
{

	char Letter = ReadCharLetter();

	cout << endl;

	cout << "Character after inverting case: \n";

	cout << InvertCase(Letter) << endl;
	
	system("pause>0");
}