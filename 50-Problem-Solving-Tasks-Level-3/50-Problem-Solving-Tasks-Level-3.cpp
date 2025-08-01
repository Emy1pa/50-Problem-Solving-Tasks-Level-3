#include <iostream>
#include <string>
#include <vector>

using namespace std;

string RemovePunctuation(string S1){
	string Result = "";
	for (int i = 0; i < S1.length();)
	{
		if (ispunct(S1[i])) {
			S1.erase(i, 1);
		}
		else {
			i++;
		}
	}
	return S1;
}


int main()
{
	string S1 = "Welcome to Jordan, Jordan is a nice country; it's amazing.";
	
	cout << "Original String: \n" << S1 << endl;

	cout << "Punctuation Removed: \n" << RemovePunctuation(S1) << endl;
	
	system("pause>0");
}