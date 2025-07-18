#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;


string ReadText() {
	string Text;
	cout << "Please enter your string ?\n";
	getline(cin,Text);
	return Text;
}

//int PrintCounterOfWordInString(string Text){
//	int Counter = 0;
//	string delim = " ";
//	short pos = 0;
//
//	string sWord;
//
//	while((pos = Text.find(delim)) != std::string::npos){
//		sWord = Text.substr(0, pos);
//		if (sWord != "") {
//			Counter++;
//		}
//		Text.erase(0, pos + delim.length());
//	}
//	if (Text != "") {
//		cout << Text << endl;
//		Counter++;
//	}
//	return Counter;
//
//}

vector <string> Split(string Text, string Delim){
	short pos = 0;
	string sWord;
	vector <string> vWord;
	while ((pos = Text.find(Delim)) != std::string::npos) {
		sWord = Text.substr(0, pos);
		if (sWord != "") {
			vWord.push_back(sWord);
		}
		Text.erase(0, pos + Delim.length());
	}
	if (Text != "") {
		vWord.push_back(Text);
	}
	return vWord;

}

int main()
{

	string Text = ReadText();

	vector <string> vWord;

	vWord = Split(Text, " ");

	cout << endl;

	cout << "Tokens = " << vWord.size() << endl;

	cout << endl;

	for (string &Word : vWord) {
		cout << Word << endl;
	}
	cout << endl;
	
	system("pause>0");
}