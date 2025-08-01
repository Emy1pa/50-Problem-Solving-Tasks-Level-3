#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector <string> SplitString(string S1, string Delim) {
	short pos = 0;
	vector <string> vString;
	string sWord;
	while ((pos = S1.find(Delim)) != std::string::npos) {
		sWord = S1.substr(0, pos);
		if (sWord != "") {
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "") {
		vString.push_back(S1);
	}
	return vString;
}



vector <string> ReplaceStringWithMatchCase(string S1, string StringToReplace, string ReplaceTo){
		vector <string> S2 = SplitString(S1, " ");
		for (int i = 0; i < S2.size(); i++)
		{
			if (S2[i] == StringToReplace) {
				S2[i] = ReplaceTo;
			}
	}
	
	return S2;
}

bool CheckIfMatchCase(string S1, string S2) {
	for (int i = 0; i < S2.size(); i++)
	{
		if (tolower(S1[i]) != tolower(S2[i])) {
			return false;
		}
	}

	return true;
}

vector <string> ReplaceStringWithNoMatchCase(string S1, string StringToReplace, string ReplaceTo) {
	vector <string> S2 = SplitString(S1, " ");
	for (int i = 0; i < S2.size(); i++)
	{
		if (CheckIfMatchCase(S2[i], StringToReplace)) {
			S2[i] = ReplaceTo;
		}
	}

	return S2;
}


                        
string JoinString(vector <string> vString, string Delim){
	string S1 = "";
	for (string& s : vString) {
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}


int main()
{
	string S1 = "Welcome To Jordan , Jordan is a nice country";

	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\n Original String \n" << S1 ;

	vector <string> S3 = ReplaceStringWithMatchCase(S1, StringToReplace, ReplaceTo);
	string ResultMatch = JoinString(S3, " ");
	cout << "\n\n Replace with Match Case: \n";
	cout << ResultMatch << endl;

	
	vector <string> S2 = ReplaceStringWithNoMatchCase(S1, StringToReplace, ReplaceTo);
	string Result = JoinString(S2, " ");
	
	cout << "\n\n Replace with No Match Case: \n";
	cout << Result << endl;
	system("pause>0");
}