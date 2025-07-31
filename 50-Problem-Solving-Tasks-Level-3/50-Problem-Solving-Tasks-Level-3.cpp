#include <iostream>
#include <string>
#include <vector>

using namespace std;


string JoinString(vector <string> vString, string Delim){
	string JoinStrings = "";

	for (string& S : vString) {
		JoinStrings = JoinStrings + S + Delim;
	}
	return JoinStrings.substr(0, JoinStrings.length() - Delim.length());
}

string JoinString(string arrString[], short Length, string Delim) {
	string JoinStrings = "";

	for (int i = 0; i < Length; i++)
	{
		JoinStrings = JoinStrings + arrString[i]+ Delim;
	}
	return JoinStrings.substr(0, JoinStrings.length() - Delim.length());
}







int main()
{
	
	vector <string> vString = { "Mohammed", "Faid", "Ali", "Maher" };
	string arrString[] = { "Mohammed", "Faid", "Ali", "Maher" };
	cout << "\nVector after join: \n";

	cout << JoinString(vString, " ");

	cout << "\nArray after join: \n";

	cout << JoinString(arrString, 4, " ");

	system("pause>0");
}