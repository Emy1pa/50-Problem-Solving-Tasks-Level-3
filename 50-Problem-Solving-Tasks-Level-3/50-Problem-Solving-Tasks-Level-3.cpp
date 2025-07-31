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







int main()
{
	
	vector <string> vString = { "Mohammed", "Faid", "Ali", "Maher" };
	cout << "\nVector after join: \n";

	cout << JoinString(vString, " ");

	system("pause>0");
}