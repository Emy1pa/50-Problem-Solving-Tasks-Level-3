#include <iostream>
#include <string>
#include <vector>

using namespace std;





string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplace){
	short pos = S1.find(StringToReplace);
	while (pos != std::string::npos) {
		S1 = S1.replace(pos, StringToReplace.length(), sReplace);
		pos = S1.find(StringToReplace);
	}
	return S1;
}





int main()
{
	string S1 = "Welcome To Jordan , Jordan is a nice country";

	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\n Original String \n" << S1;

	cout << "\n\n String after Replace: ";
	cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo) << endl;
	
	system("pause>0");
}