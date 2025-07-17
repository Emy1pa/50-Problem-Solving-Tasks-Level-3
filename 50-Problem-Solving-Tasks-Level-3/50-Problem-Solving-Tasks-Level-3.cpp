#include <iostream>
#include <string>
#include <cctype>

using namespace std;


char ReadCharacter() {
	char Letter;
	cout << "Please enter a Character ?\n";
	cin >> Letter;
	return Letter;
}

char InvertLetter(char Letter) {
	if (isupper(Letter)) {
		return tolower(Letter);
	}
}


bool CheckIfIsVowel(char Letter){
	if (InvertLetter(Letter) == 'a' || Letter == 'e' || Letter ==  'i' || Letter == 'o' || Letter == 'u')
		return true;
	else
		return false;

}



int main()
{

	char Letter = ReadCharacter();

	if (CheckIfIsVowel(Letter)) 
		cout << "Yes Letter \'" << Letter << "\' is a vowel";
	else
		cout << "No Letter \'" << Letter << "\' is not a vowel";

	
	
	system("pause>0");
}