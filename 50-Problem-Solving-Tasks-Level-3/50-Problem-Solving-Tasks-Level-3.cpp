#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

struct stClientData {
	string AccountNumber = "";
	string PinCode = "";
	string ClientName = "";
	string Phone = "";
	int AccountBalance = 0;
};

stClientData ReadClientData() {
	stClientData ClientData;
	cout << "Enter Account Number? ";
	cin.ignore(1, '/n');
	getline(cin, ClientData.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, ClientData.PinCode);
	cout << "Enter Name? ";
	getline(cin, ClientData.ClientName);
	cout << "Enter Phone? ";
	getline(cin, ClientData.Phone);
	cout << "Enter Account Balance? ";
	cin >> ClientData.AccountBalance;
	return ClientData;
}

string ConvertRecordToLine(stClientData ClientData, string Seperator = "#//#") {
	string RecordLine = "";
	RecordLine += ClientData.AccountNumber + Seperator;
	RecordLine += ClientData.PinCode + Seperator;
	RecordLine += ClientData.ClientName + Seperator;
	RecordLine += ClientData.Phone + Seperator;
	RecordLine += to_string(ClientData.AccountBalance);
	return RecordLine;
}

void AddStringToFile(string Line){

	fstream MyFile;

	MyFile.open("ClientFile", ios::app);
	if (MyFile.is_open()) {
		MyFile << Line << endl;
	}
	MyFile.close();
}

void KeepAddingClients(){
	char AddMore = 'Y';
	do
	{
		stClientData ClientData = ReadClientData();
		string ConvertToLine = ConvertRecordToLine(ClientData);
		AddStringToFile(ConvertToLine);
		cout << "Client Added Successfully, do you want to add more clients ? ";
		cin >> AddMore;
	} while (AddMore == 'Y' || AddMore == 'y');
}




int main()
{
	
	cout << "Adding New Client: \n\n";
	KeepAddingClients();
	system("pause>0");
}