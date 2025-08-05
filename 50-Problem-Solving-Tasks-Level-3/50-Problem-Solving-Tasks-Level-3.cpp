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

stClientData ReadClientData(){
	stClientData ClientData;
	cout << "Enter your Account Number ? \n";
	cin >> ClientData.AccountNumber;
	cout << "Enter your PinCode ? \n";
	cin >> ClientData.PinCode;
	cout << "Enter your Name ? \n";
	cin.ignore(1, '\n');
	getline(cin, ClientData.ClientName);
	cout << "Enter your Phone ? \n";
	cin >> ClientData.Phone;
	cout << "Enter your Account Balance ? \n";
	cin >> ClientData.AccountBalance;
	return ClientData;
}

string ConvertRecordToLine(stClientData ClientData, string Seperator = "#//#") {
	string stClientRecord = "";
	stClientRecord += ClientData.AccountNumber + Seperator;
	stClientRecord += ClientData.PinCode + Seperator;
	stClientRecord += ClientData.ClientName + Seperator;
	stClientRecord += ClientData.Phone + Seperator;
	stClientRecord += to_string(ClientData.AccountBalance);
	return stClientRecord;
}

int main()
{
	stClientData ClientData;
	cout << "Please enter Client Data: \n\n";
	ClientData = ReadClientData();

	cout << "Client Record for saving is: \n";
	cout << ConvertRecordToLine(ClientData);
	system("pause>0");
}