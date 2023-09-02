//============================================================================
// Name        : Lab8_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int option = 1;
	string c;
	cout << "Choose Input Method:\n" << "(1) Console\n" << "(2) File\n";
	cin >> option;

	ifstream in(c);
	if(option == 2){
		cout<<"Enter File Name"<<endl;
		cin>>c;
		in.open(c);
		if(in.fail()){
			cout<<"Error Opening Input File." << endl;
			exit(1);
		}
	}

	char** seatMap;

	int row;
	cout<< "Enter The Number Of Rows: ";
	if (option == 2){
		in >> row;
		cout << row << endl;
	}
	else {
		cin >> row;
	}
	cout << "\n";
	const int col = 5;

	seatMap=new char*[row];
	for (int i = 0; i < row; i++){
		seatMap[i] = new char[col];
	}

	for (int i = 0; i<row; i++){
		seatMap[i][0] = 48 + i + 1;
		for (int j = 1; j < col; j++){
			seatMap[i][j] = 64 + j;
		}
	}

	cout << "Seat Map: " << endl;
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col;j++){
			cout << seatMap[i][j]<<' ';
		}
		cout << endl;
	}

	int count = row * (col - 1);
	bool finished = false;

	while(!finished){
		cout << "\nEnter seat to reserve (ex. 4A) or 00 to finish: ";
		char input[2];
		if (option == 2){
			in>>input[0]>> input[1];
			cout << input[0]<<input[1]<<endl;
		}
		else{
			cin>>input[0]>>input[1];
		}

		if (input[0]=='0'&&input[1]=='0'){
			finished = true;
			break;
		}
		int inputRow = input[0]-49;
		int inputCol = input[1]-64;
			if(inputRow < 0 || inputRow > row - 1 || inputCol < 1 || inputCol > col - 1){
		cout << "Invalid Seat." << endl;
			}
			else if (seatMap[inputRow][inputCol]=='X'){
		cout << "Seat Has Already Been Reserved. Please Enter Another Seat That Is Available." << endl;
			}
			else{
				seatMap[inputRow][inputCol] = 'X';
				count--;
			}
			cout<<"\nUpdated Seat Map: " << endl;
				for(int i = 0; i<row; i++){
					for(int j = 0; j<col; j++){
						cout<<seatMap[i][j]<< ' ';
					}
					cout<< endl;
				}

				if (count == 0){
					cout << "\nAll Seats Have Been Filled." << endl;
					finished = true;
					break;
				}
	}
	delete [] seatMap;

	return 0;
}
