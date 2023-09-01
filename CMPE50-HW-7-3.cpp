//============================================================================
// Name        : CMPE50-HW-7-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 7-3
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class StringArray{
private:
	string* dynamicArray;
	int size;
public:
	StringArray(){
		dynamicArray=NULL;
		size=0;
	}
	bool add(string &newEntry){
		string* newArray = new string[size+1];
		for(int i=0; i<size; i++) newArray[i] = dynamicArray[i];
		newArray[size] = newEntry;
		delete [] dynamicArray;
		dynamicArray = newArray;
		size += 1;
		return true;
	}
	bool deletes(string &deleteEntry){
	for(int i=0; i<size; i++){
		if(dynamicArray[i].compare(deleteEntry) == 0){
		string* newArray = new string[size-1];
		int index = 0;
			for(int j=0; j<size; j++){
				if(dynamicArray[j].compare(deleteEntry) != 0){
				newArray[index++] = dynamicArray[j];
				}
			}
		size -= 1;
		delete [] dynamicArray;
		dynamicArray = newArray;
		return true;
		}
	}
		return false;
		}
	string* get(int pos){
		if(pos<0 || pos>=size)
			return NULL;
		return (dynamicArray+pos);
	}
	int getSize(){
		return size;
	}

};

int main() {
	cout<<"List Of Items In Array:\n";
	StringArray sa;
	string str= "Entry 1",str2="Entry 2",str3="Entry 3",str4="Entry 4";
	sa.add(str);
	sa.add(str2);
	sa.add(str3);
	sa.add(str4);

	for(int i=0; i<sa.getSize(); i++) {
	cout << *sa.get(i)<<endl;
	}
	cout <<"\nSize of Dynamic Array Before Deleting "<<str3<<": "<< sa.getSize()<<endl;

	sa.deletes(str3);
	cout <<"\n";
	for(int i=0; i<sa.getSize(); i++) {
	cout << *sa.get(i)<<endl;
	}
	cout <<"\nSize Of Dynamic Array After Deleting "<<str3<<": "<< sa.getSize()<<endl;
	return 0;
	}

//OUTPUT:
//List Of Items In Array:
//Entry 1
//Entry 2
//Entry 3
//Entry 4
//
//Size of Dynamic Array Before Deleting Entry 3: 4
//
//Entry 1
//Entry 2
//Entry 4
//
//Size Of Dynamic Array After Deleting Entry 3: 3

