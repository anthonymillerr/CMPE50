//============================================================================
// Name        : CMPE50-HW-8-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 8-1
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstddef>

using namespace std;

class StringVar
{
public :
	StringVar(int size);
	StringVar();
	StringVar(const char a[]);
	StringVar(const StringVar& string_object);
	~StringVar();

	int length() const;
	void input_line(istream& ins);
	StringVar copy_piece(int pos,int npos);
	char one_char(int pos);
	void set_char(int pos,char ch);
	StringVar operator=(const StringVar&);
	friend ostream& operator<<(ostream& outs, const StringVar& the_string);
	friend istream& operator>>(istream& ins, StringVar& the_string);
	friend StringVar operator+(const StringVar& sv1, const StringVar& sv2) ;
	friend bool operator==(const StringVar& sv1, const StringVar& sv2);
	char operator[](int);
private :
	char *value; //pointer to dynamic array that holds the string value.
	int max_length; //declared max length of any string value.
	};

int StringVar::length() const{
return max_length;
}
void StringVar::input_line(istream& ins){
cout << "Enter String :";
cin.get(value, 100);
int count = 0;
while (value[count] != '\0') {
count++;
}
max_length = count;
}
StringVar StringVar::copy_piece(int pos,int npos){
StringVar sv(npos-pos);
for(int i=pos;i<npos;i++)
{
	sv.value[i-pos]=value[i];
}
return sv;
}
char StringVar::one_char(int pos){
if(pos>=0 && pos<=max_length)
{
	return value[pos];
}
return 0;
}
void StringVar::set_char(int pos,char ch){
if(pos>=0 && pos<=max_length){
	this->value[pos]=ch;
	}
}
StringVar::StringVar(int size){
value = new char[size];
this->max_length = 0;
}
StringVar::StringVar(){
value = new char[100];
this->max_length = 0;
}
StringVar::StringVar(const char a[]):max_length(strlen(a)){
value = new char[max_length + 1];
strcpy(value, a);
}
StringVar::~StringVar(){
delete[] value;
value = NULL;
}
StringVar::StringVar(const StringVar& string_object){
this->value = new char[100];
this->max_length = string_object.max_length;
for (int i = 0; i < max_length; i++){
	this->value[i] = string_object.value[i];
	}
}
StringVar StringVar::operator=(const StringVar& the_string){
StringVar* s = new StringVar();
s->max_length = the_string.max_length;
	for (int i = 0; i < s->max_length; i++) {
		s->value[i] = the_string.value[i];
	}
	return *s;
}
ostream& operator<<(ostream& outs, const StringVar& the_string){
outs << "String:";
for (int i = 0; i < the_string.max_length; i++) {
outs << the_string.value[i];
}
outs << endl;
return outs;
}
istream& operator>>(istream& ins, StringVar& the_string)
{
cout << "Enter String:";
ins.get(the_string.value, 100);
int count = 0;
while (the_string.value[count] != '\0') {
count++;
}
the_string.max_length = count;
return ins;
}
bool operator==(const StringVar& s1, const StringVar& s2){
if(s1.max_length==s2.max_length)
{
	for(int i=0;i<s1.max_length;i++){
		if(s1.value[i]!=s2.value[i]){
			return false;
			}
		}
			return true;
			}
		else{
			return false;
			}
}
StringVar operator+(const StringVar& sv1, const StringVar& sv2)
{
StringVar the_string;
the_string.max_length = sv1.max_length + sv2.max_length;
for (int i = 0; i < sv1.max_length; i++) {
	the_string.value[i] = sv1.value[i];
}
for (int i = sv1.max_length; i < (sv1.max_length + sv2.max_length); i++) {
	the_string.value[i] = sv2.value[i - sv1.max_length];
}
return the_string;
}
char StringVar::operator[](int index)
{
return value[index];
}

// Main function
int main()
{
StringVar s1;


cin>>s1;
cout<<"First ";
cout<< s1;
cin.ignore();

cout<<endl;
StringVar s2;
s2.input_line(cin);

cout<<"Second ";
cout<<s2;
cout<<"\n";
StringVar s3=s1+s2;
cout<<"Combined 'String 3' ";
cout<<s3;
cout<<"\n";
StringVar s4=s3;
cout<< "New 'String 4' From Addition of String 1 and 2 ";
cout<< s4;
cout<<"\n";
cout<<"Are Strings 1 And 4 The Same? ";
if(s1==s4)
{
cout<<"True"<<endl;
}
else
{
cout<<"False"<<endl;
}
cout<<"\n";

cout<<"Identifying Character In '2' Position:"<<s1.one_char(2)<<endl;
s1.set_char(2,'h');
cout<<"Modifying Character In '2' Position:"<<s1.one_char(2)<<endl;
cout<<"\n";
cout<<s1<<endl;
return 0;
}

//OUTPUT:
//
//Enter String:Hello
//First String:Hello
//
//Enter String :Hello
//Second String:Hello
//
//Combined 'String 3' String:HelloHello
//
//New 'String 4' From Addition of String 1 and 2 String:HelloHello
//
//Are Strings 1 And 4 The Same? False
//
//Identifying Character In '2' Position:l
//Modifying Character In '2' Position:h
//
//String:Hehlo
