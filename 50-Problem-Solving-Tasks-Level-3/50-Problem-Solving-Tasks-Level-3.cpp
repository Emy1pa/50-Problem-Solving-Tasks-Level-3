#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector <string> SplitString(string S1, string Delim){
	vector <string> vString;
	short pos = 0;
	string sWord;
	while((pos = S1.find(Delim)) != std::string::npos){
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

vector <string> ReplaceString(string S1, string OriginalWord, string ReplacableWord) {
	vector <string> vString;
	vString = SplitString(S1, " ");

	for (int i = 0; i < vString.size(); i++)
	{
		if (vString[i] == OriginalWord) {
			vString[i] = ReplacableWord;
		}
	}
	return vString;
}









int main()
{
	string S1 = "Welcome To Jordan , Jordan is a nice country";

	vector <string> ReplacedString = ReplaceString(S1, "Jordan", "USA");
	cout << "Original String \n";
	cout << S1 << endl;

	cout << "String After Replace: \n";
	for (string& Word : ReplacedString) {
		cout << Word << " ";
	}
	
	system("pause>0");
}