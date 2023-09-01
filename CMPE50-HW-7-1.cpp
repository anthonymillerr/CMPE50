//============================================================================
// Name        : CMPE50-HW-7-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 7-1
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* Class SuperString for HW7 */
class sstring: public string
{
public:
 sstring() : string() { };
 sstring(const string &str) : string(str) { }
 sstring(const sstring &sstr) : string(sstr) { }
 sstring operator= (const sstring &sstr);
 sstring operator= (const char *cstr);
 friend sstring operator* (const sstring &sstr, int multiple);
 friend sstring operator- (const sstring &sstr1, const sstring &sstr2);
 friend sstring operator/ (const sstring &sstr, int divider);
 friend sstring operator! (const sstring &sstr);
 /* prefix increment */
 friend sstring operator++ (sstring &sstr);
 /* postfix increment */
 friend sstring operator++ (sstring &sstr, int dummy);
 /* prefix decrement */
 friend sstring operator-- (sstring &sstr);
 /* postfix decrement */
 friend sstring operator-- (sstring &sstr, int dummy);
};

sstring sstring::operator= (const sstring &sstr)
{
 // calling base class operator=
 string::operator=(sstr);
 return *this;
}

sstring sstring::operator= (const char *cstr)
{
 string::operator=(cstr);
 return *this;
}

sstring operator* (const sstring &sstr, int multiple)
{
 sstring temp = sstr;
 for (int i = 1; i < multiple; i++)
 {
  temp.append(sstr.c_str());
 }
 return temp;
}

sstring operator- (const sstring &sstr1, const sstring &sstr2)
{
 int index =-1;
 for (int i = 0; i< sstr1.length(); i++){
	 bool found = true;
	 for(int j = 0; j < sstr2.length(); j++)
	 {
		 if(sstr1[i+j]!= sstr2[j]){
			 found = false;
			 break;
		 }
	 }
	 if (found){
		 index = i;
		 break;
	 }
 }
 if (index != -1){
	 string temp = sstr1.substr(0,index) + sstr1.substr(index + sstr2.length());
	 sstring tmps(temp);
	 return tmps;
 }
 return sstr1;
}

sstring operator/ (const sstring &sstr, int divider)
{

 double doublen = sstr.length() / divider;
 int len;
 if(ceil(doublen)-doublen <=0.5)
	 len = ceil(doublen);
 else
	 len = floor(doublen);
 return sstr.substr(0,len);
}

sstring operator! (const sstring &sstr)
{
 string temp = "";
 for (int i = sstr.length()-1;i>=0; i--)
 {
	 temp+= sstr[i];
 }
 sstring tmps(temp);
 return tmps;
}
sstring operator++(sstring &sstr)
		{
	if (sstr.length() <= 1)
		return sstr;
	return sstr.substr(sstr.length()-1, sstr.length()) + sstr.substr(0, sstr.length()-1);
		}
sstring operator++(sstring &sstr, int dummy){
	if (sstr.length()<=1)
		return sstr;
	return sstr.substr(sstr.length()-1, sstr.length()) + sstr.substr(0, sstr.length()-1);
}
sstring operator--(sstring &sstr)
		{
	if (sstr.length() <= 1)
		return sstr;
	return sstr.substr(1, sstr.length()-1) + sstr.substr(0,1);
		}
sstring operator--(sstring &sstr, int dummy){
	if (sstr.length()<=1)
		return sstr;
	return sstr.substr(1, sstr.length()-1) + sstr.substr(0,1);
}


int main() {

sstring sstr1("Hello World!"), sstr2("World"), sstr3, sstr4, sstr5, sstr6, sstr7, sstr8, sstr9, sstr10, sstr11;
//testing - operator
sstr3 = sstr1 - sstr2;
cout << "sstr3 = " << sstr3 << endl;
//testing * operator
sstr4 = sstr1 * 3;
cout << "sstr4 = " << sstr4 << endl;
//testing / operator
sstr5 = sstr1/3;
cout << "sstr5 = " << sstr5 << endl;
sstr6 = sstr1/20;
cout << "sstr6 = " << sstr6 << endl;
//testing ! operator
sstr7 = !sstr1;
cout << "sstr7 = " << sstr7 << endl;
//testing ++ operator
sstr8 = ++sstr1;
cout << "sstr8 = " << sstr8 << endl;
sstr9 = sstr1++;
cout << "sstr9 = " << sstr9 << endl;
//testing ++ operator
sstr10 = --sstr1;
cout << "sstr10 = " << sstr10 << endl;
sstr11 = sstr1--;
cout << "sstr11 = " << sstr11 << endl;

return 0;
}

//OUTPUT:
//sstr3 = Hello !
//sstr4 = Hello World!Hello World!Hello World!
//sstr5 = Hell
//sstr6 =
//sstr7 = !dlroW olleH
//sstr8 = !Hello World
//sstr9 = !Hello World
//sstr10 = ello World!H
//sstr11 = ello World!H
