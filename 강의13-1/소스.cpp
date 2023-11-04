//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include "ClientData.h"
//using namespace std;
//
//void outputLine(ostream& output, const ClientData& record);
//
//int main() {
//	fstream credit("credit.bin", ios::in | ios::out | ios::binary);
//	ofstream outPrintFile("print.txt", ios::out);
//
//	outPrintFile << left << setw(10) << "Account" << setw(16)
//		<< "Last Name" << setw(11) << "First Name" << right
//		<< setw(10) << "Balance" << endl;
//
//	credit.seekg(0);
//
//	ClientData client;
//	credit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
//
//	while (!credit.eof()) {
//		if (client.getAccountNumber() != 0) {
//			outputLine(outPrintFile, client);
//		}
//		credit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
//	}
//}
//
//void outputLine(ostream& output, const ClientData& record) {
//	output << left << setw(10) << record.getAccountNumber()
//		<< setw(16) << record.getLastName()
//		<< setw(11) << record.getFirstName()
//		<< setw(10) << setprecision(2) << right << fixed
//		<< showpoint << record.getBalance() << endl;
//}
