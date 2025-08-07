#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct stClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;
	bool MarkForUpdate = false;
};

vector <string> SplitString(string S9, string Delim)
{
	vector <string> vString;
	short pos = 0;
	string sWord; 
		while ((pos = S9.find(Delim)) !=
			std::string::npos)
		{
				sWord = S9.substr(0, pos);
			if (sWord != "")
			{
				vString.push_back(sWord);
			}
			S9.erase(0, pos +
					Delim.length());
		}
		if (S9 != "")
		{
			vString.push_back(S9);
		}
	return vString;
}


string ConvertRecordToLine(stClient Client, string Separator = "#//#") {
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);
	return stClientRecord;
}

stClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
	stClient Client;
	vector <string> vClientData;
	vClientData = SplitString(Line, Separator);
	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
	return Client;
}

void PrintClientRecord(stClient Client)
{
	cout << "\n\nThe following is the extracted client record : \n\n";
	cout << "Account Number : " << Client.AccountNumber << endl;
	cout << "PinCode : " << Client.PinCode << endl;
	cout << "Name : " << Client.Name << endl;
	cout << "Phone : " << Client.Phone << endl;
	cout << "Account Balance : " << Client.AccountBalance << endl;
}

vector <stClient> LoadClientsDataFromFile(string FileName)
{
	vector <stClient> vClient;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		stClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClient.push_back(Client);
		}
		MyFile.close();
	}
	return vClient;
}

const string ClientsFileName = "Clients.txt";

bool FindClientByAccountNumber(string AccountNumber, vector <stClient> vClients, stClient& Client){
	for (stClient C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease enter AccountNumber ? ";
	cin >> AccountNumber;
	return AccountNumber;
}


bool MarkClientForUpdateByAccountNumber(string AccountNumber, vector <stClient> &vClients ){
	for (stClient& C : vClients) {
		if (C.AccountNumber == AccountNumber) {
			C.MarkForUpdate = true;
			return true;
		}
	}
	return false;
}

stClient ReadClientData() {
	stClient ClientData;
	cout << "Enter Account Number? ";
	cin.ignore(1, '/n');
	getline(cin, ClientData.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, ClientData.PinCode);
	cout << "Enter Name? ";
	getline(cin, ClientData.Name);
	cout << "Enter Phone? ";
	getline(cin, ClientData.Phone);
	cout << "Enter Account Balance? ";
	cin >> ClientData.AccountBalance;
	return ClientData;

	}

vector <stClient> SaveClientsDataToFile(string FileName, vector <stClient> vClients){
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	string DataLine;
	if (MyFile.is_open()) {
		for (stClient &C : vClients) {
			if (C.MarkForUpdate == true) {
				C = ReadClientData();
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
			else {
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
		}
		MyFile.close();
	}
	return vClients;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector <stClient>& vClients){
	stClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, Client)) {
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want update this client ? n/y ?";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y') {
			MarkClientForUpdateByAccountNumber(AccountNumber, vClients);
			SaveClientsDataToFile(ClientsFileName, vClients);
			vClients = LoadClientsDataFromFile(ClientsFileName);
			cout << "\n\n Client Updated Successfully. \n";
			return true;
		}
	}
	else {
		cout << "\nClient with Account Number (" << AccountNumber << ") is NOT Found!\n";
			return false;
	}
	
}

int main()
{
	vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();
	UpdateClientByAccountNumber(AccountNumber, vClients);
	system("pause>0");
}