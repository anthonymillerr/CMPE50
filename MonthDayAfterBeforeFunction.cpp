//============================================================================
// Name        : CMPE50-HW-6-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-6-1
//============================================================================

#include <iostream>
using namespace std;

class DayOfYear{
private:
	void check_date();
	int month;
	int day;
public:
	friend bool isAfter(DayOfYear date1, DayOfYear date2);
	friend bool isBefore(DayOfYear date1, DayOfYear date2);
	friend DayOfYear add(DayOfYear date1, DayOfYear date2);
	friend bool equal(DayOfYear date1, DayOfYear date2);
	DayOfYear(int the_month, int the_day);
	DayOfYear();
	void input();
	void output();
	int get_month();
	int get_day();
};

int main() {
	DayOfYear date1(12,30);
	DayOfYear date2(12,15);

	cout<<"Date 1 (month/day): " << date1.get_month() << "/" << date1.get_day() << endl;
	cout<<"Date 2 (month/day): " << date2.get_month() << "/" << date2.get_day() << endl;

	if(isBefore(date1, date2)){
		cout<<"Date 1 Is Before Date 2." << endl;
	}
	DayOfYear date3;
	date3 = add(date1,date2);
	cout<<"Date 3 (month/day): " << date3.get_month() << "/" << date3.get_day() << endl;

	return 0;
}
bool isAfter(DayOfYear date1, DayOfYear date2){
	if(date1.month > date2.month){
		return true;
	}
	if(date1.month == date2.month){
		if(date1.day > date2.day){
			return true;
		}
	}
	return false;
}
bool isBefore(DayOfYear date1, DayOfYear date2){
	if(date1.month < date2.month){
		return true;
	}
	if(date1.month == date2.month){
		if(date1.day < date2.day){
			return true;
		}
	}
	return false;
}
DayOfYear add(DayOfYear date1, DayOfYear date2){
	int month, day;
	month = date1.month + date2.month;
	if(month>12){
		if(month == 24){
			month = 12;
		}
		else{
			month = month % 12;
		}
	}
	day = date1.day + date2.day;
	if(day>30){
		if(day==60){
			day=30;
		}
		else{
			day = day % 30;
		}
		month += 1;
	}
	if(month>12){
		if(month == 24){
			month = 12;
		}
		else{
			month = month % 12;
		}
	}
	return DayOfYear(month,day);
}
bool equal(DayOfYear date1, DayOfYear date2){
	return (date1.month == date2.month && date1.day == date2.day);
}
DayOfYear::DayOfYear(int the_month, int the_day){
	day = the_day;
	month = the_month;
}
DayOfYear::DayOfYear(){
	day = 1;
	month = 1;
}
int DayOfYear::get_month(){
	return month;
	}
int DayOfYear::get_day(){
	return day;
	}

//OUTPUT
//Date 1 (month/day): 12/30
//Date 2 (month/day): 12/15
//Date 3 (month/day): 1/15

