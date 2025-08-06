#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";


struct stClientData {
	string AccountNumber = "";
	string PinCode = "";
	string ClientName = "";
	string Phone = "";
	int AccountBalance = 0;
};

vector <string> SplitString(string Line, string Seperator){
	int pos = 0;
	string sWord = "";
	vector <string> vClient;
	while((pos = Line.find(Seperator)) != std::string::npos){
		sWord = Line.substr(0, pos);
		if (sWord != "") {
			vClient.push_back(sWord);
		}
		Line.erase(0, pos + Seperator.length());
	}
	if (Line != "") {
		vClient.push_back(Line);
	}
	return vClient;
}

stClientData ConvertLineToRecord(string Line) {
	stClientData ClientData;
	vector <string> vClientData = SplitString(Line, "#//#");
	ClientData.AccountNumber = vClientData[0];
	ClientData.PinCode = vClientData[1];
	ClientData.ClientName = vClientData[2];
	ClientData.Phone = vClientData[3];
	ClientData.AccountBalance =stod(vClientData[4]);
	return ClientData;
}

vector <stClientData> ReadFileContent() {
	vector <stClientData> vClients;

	fstream MyFile;

	MyFile.open(ClientsFileName, ios::in);
	if (MyFile.is_open()) {
		string Line;
		while (getline(MyFile, Line)) {
			if (Line != "") {
				stClientData Client = ConvertLineToRecord(Line);
				vClients.push_back(Client);
			}
		}
		MyFile.close();
	}
	return vClients;
}

//void DisplayClientData(vector <stClientData> ClientData){
//	cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
//	cout << "| " << left << setw(17) << "Account Number" << " | "  << left << setw(11) << "PinCode" << " | " << left << setw(34) << "Client Name " << " | " << left << setw(13) << "Phone " << " | " << left << setw(20) << "Balance " << endl;
//	cout << "-----------------------------------------------------------------------------------------------------------------------\n";
//	for (stClientData& Client : ClientData) {
//	cout << "| " << left << setw(17) << Client.AccountNumber << " | " << left << setw(11) << Client.PinCode << " | " << left << setw(34) << Client.ClientName << " | " << left << setw(13) << Client.Phone << " | " << left << setw(20) << Client.AccountBalance << endl;
//	}
//	cout << "-----------------------------------------------------------------------------------------------------------------------\n";
//}

//void DisplayFinalResults(){
//	vector <stClientData> ClientData = ReadFileContent();
//	cout << "\t\t\t\t\tClient List (" << ClientData.size() << ") Client(s). \n";
//	DisplayClientData(ClientData);
//
//}

void DisplayClientData(stClientData ClientData) {
	cout << "The following are the client details: \n";
	cout << "Account Number: " << ClientData.AccountNumber << endl;
	cout << "PinCode: " << ClientData.PinCode << endl;
	cout << "Client Name: " << ClientData.ClientName << endl;
	cout << "Client Phone: " << ClientData.Phone << endl;
	cout << "Account Balance: " << ClientData.AccountBalance << endl;
}

bool SearchForClientAccount() {
	string AccountNumber;
	cout << "Please enter Account Number ? \n";
	cin >> AccountNumber;
	vector <stClientData> vClients = ReadFileContent();
	for (stClientData& Client : vClients) {
		if (AccountNumber == Client.AccountNumber) {
			DisplayClientData(Client);
			return true;
		}
	}
	cout << "Client with Account Number (" << AccountNumber << ") Not Found!\n";
	return false;
}


int main()
{
	SearchForClientAccount(); 
	system("pause>0");
}