
//============================================================================
// Name        : readfolder.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>

//   ofstream: Stream class to write on files
//   ifstream: Stream class to read from files
//   fstream: Stream class to both read and write from/to files.

using namespace std;

string line;
ifstream in; // Create an input file stream. The file is called "names.txt" and is in the same directory as this project

int main() {

	cout << "inicio" << endl;

	in.open("names.txt");
	if (!in) {
		cout << "Error: Can't open the file named names.txt.\n";
		return 0;
	}



	else if (in) {
		for (int x = 0; x < 600; x++) {
			in >> line; // Read the first item from the file into an integer variable x.
			cout << "'/store/user/covarell/ZZ_MGLO_py_LHE_GEN/" << line << "'," << endl;
		}
	}

	cout << "fin" << endl;

	return 0;
}
