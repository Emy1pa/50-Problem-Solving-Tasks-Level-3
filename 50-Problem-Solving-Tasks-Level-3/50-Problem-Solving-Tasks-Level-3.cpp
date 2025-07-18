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

int PrintCounterOfWordInString(string Text){
	int Counter = 0;
	string delim = " ";
	short pos = 0;

	string sWord;

	while((pos = Text.find(delim)) != std::string::npos){
		sWord = Text.substr(0, pos);
		if (sWord != "") {
			Counter++;
		}
		Text.erase(0, pos + delim.length());
	}
	if (Text != "") {
		cout << Text << endl;
		Counter++;
	}
	return Counter;

}









int main()
{

	string Text = ReadText();

	cout << endl;
	

	cout << "The number of words in your string is: " << PrintCounterOfWordInString(Text);
	
	
	system("pause>0");
}