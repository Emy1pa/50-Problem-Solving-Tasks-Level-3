#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stClientData {
	string AccountNumber = "";
	string PinCode = "";
	string ClientName = "";
	string Phone = "";
	int AccountBalance = 0;
};


vector <string> SplitString(string S1, string Delim){
	int pos = 0;
	vector <string> vClientData;
	string sWord = "";
	while((pos = S1.find(Delim)) != std::string::npos){
		sWord = S1.substr(0, pos);
		if (sWord != "") {
			vClientData.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "") {
		vClientData.push_back(S1);
	}
	return vClientData;

}

stClientData ConvertLineToRecord(string Line, string Seperator = "#//#") {
	vector <string> vClientData = SplitString(Line, Seperator);
	stClientData ClientData;
	ClientData.AccountNumber = vClientData[0];
	ClientData.PinCode = vClientData[1];
	ClientData.ClientName = vClientData[2];
	ClientData.Phone = vClientData[3];
	ClientData.AccountBalance = stod(vClientData[4]);
	return ClientData;
}

void PrintClientRecord(stClientData Client)
{
	cout << "\n\nThe following is the extracted client record : \n\n";
	cout << "Account Number : " << Client.AccountNumber << endl;
	cout << "PinCode : " << Client.PinCode << endl;
	cout << "Name : " << Client.ClientName << endl;
	cout << "Phone : " << Client.Phone << endl;
	cout << "Account Balance : " << Client.AccountBalance << endl;
}


int main()
{
	string RecordLine = "A150#//#1234#//#Imane Souaouti#//#0670066444#//#20000";
	cout << "Line Record is: \n";
	cout << RecordLine << endl;
	cout << "The following is the extracted client record: \n";
	stClientData ClientData = ConvertLineToRecord(RecordLine);
	PrintClientRecord(ClientData);
	system("pause>0");
}