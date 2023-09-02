//============================================================================
// Name        : Lab7_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab7_01
//============================================================================

#include <iostream>
using namespace std;

class Resource{
private:
	int status;
	int writeTo;

public:
	Resource(){
		status = 0;
		writeTo = 0;
	}

	Resource(int val){
		status = 0;
		if(val == 0|| val == 1){
			writeTo = val;
		} else{
			cout<< "Value Must Be 0 or 1!" << endl;
			exit(1);
		}
	}
	int getStatus() const{
		return status;
	}
	int getWriteTo() const{
		return writeTo;
	}

	void setStatus(int valStatus){
		if(valStatus == 0|| valStatus == 1){
				status = valStatus;
			} else{
				cout<< "Value Must Be 0 or 1" << endl;
				exit(1);
			}
	}
	void setWriteTo(int val){
			if(val == 0|| val == 1){
					writeTo = val;
				} else{
					cout<< "Value Must Be 0 or 1" << endl;
					exit(1);
				}
	}
	void output(ostream& out_stream){
		out_stream << status;
	}
	friend bool check_status(const Resource& res1, const Resource& res2){
		if(res1.status == 1 && res2.status == 1){
			cout << "Resource Available" << endl;
			return true;
		} else {
			cout << "Resource Unavailable" << endl;
			return false;
		}
	}
};

int main() {
	Resource resource1, resource2(1);

	resource1.setStatus(1);
	resource2.setStatus(1);

	cout<< "Resource 1 = ";
	resource1.output(cout);
	cout<<"\n";
	cout<< "Resource 2 = ";
	resource2.output(cout);
	cout<<"\n";

	check_status(resource1, resource2);

	resource1.setStatus(0);
	resource2.setStatus(0);

	cout<< "Resource 1 = ";
	resource1.output(cout);
	cout<<"\n";
	cout<< "Resource 2 = ";
	resource2.output(cout);
	cout<<"\n";

	check_status(resource1, resource2);

	return 0;
}
