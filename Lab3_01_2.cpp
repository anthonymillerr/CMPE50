//============================================================================
// Name        : Lab3_01_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab3_01_2
//============================================================================

#include <iostream>
using namespace std;

const int set_num = 5;
double val[2][5];
int i;

bool is_passed(double hw_avg,double lab_avg)
{
	return (hw_avg >= 50 and lab_avg >= 50);
}

int main() {


	cout << "Please Enter Five HW Scores [0-100]: " << endl;
			for (int i= 0; i<set_num; i++)
			{
				cin >> val[0][i];
			}
	cout << "Please Enter Five Lab Scores [0-100]: " << endl;
			for (int i= 0; i<set_num; i++)
			{
				cin >> val[1][i];
			}

			double hw_best = 0;
			double hw_worst = 0;
			double hw_avg = 0;
			for(int i = 0;i<set_num;i++){
				if(val[0][i] > hw_best)
				{
					hw_best=val[0][i];
				}
				if(val[0][i] < hw_best)
				{
					hw_worst=val[0][i];
				}
				hw_avg=hw_avg+val[0][i];
			}
			double lab_best = 0;
			double lab_worst = 0;
			double lab_avg = 0;
			for(int i = 0;i<set_num;i++){
				if(val[1][i] > lab_best)
				{
					lab_best=val[1][i];
				}
				if(val[1][i] < lab_best)
				{
					lab_worst=val[1][i];
				}
					lab_avg=lab_avg+val[1][i];
				}

			cout << "\n\nHomework and Lab Scores Are:";
			cout << "\t\t\n	1		2		3		4		5\n"<<endl;
			cout << "**********************************************************************************************************************\n";
			cout<< "HW ";
			for (i=0;i<5;i++){

					cout.width(4);
					cout.setf(std::ios::fixed | std::ios::right);
					cout<< "	 " << val[0][i];
			}
			cout<< "\nLAB ";
			for(i=0;i<5;i++){

				cout.width(4);
				cout.setf(std::ios::fixed | std::ios::right);
				cout<< "	 " << val[1][i];
			}
			cout<<"\n\nAVG ";
			int total=0;
			for(i=0;i<5;i++)
			{
				double avg= (val[0][i]+ val[1][i])/2;
				total=total+avg;
				cout.width(4);
				cout.setf(std::ios::fixed | std::ios::right);
				cout<< "	 " << avg;
			}

			cout << "\n\n\nBest Homework:		"<< hw_best << " Worst Homework:		" << hw_worst<< " Average Homework:		" << (hw_avg/5)<<"\n";
			cout << "\nBest Lab:		"<< lab_best << " Worst Lab:			" << lab_worst<< " Average Lab:			" << (lab_avg/5)<<"\n\n";

			double overall = ((hw_avg/5) + (lab_avg/5))/2;
			cout << "\nOverall Grade:		" << overall;

		if (is_passed((hw_avg/5),(lab_avg/5))==true)
			cout << "\n\nCongratulations, You Passed The Class!";
		else
			cout <<"\n\nI’m sorry to inform you that you failed the class, because your performance in the class was <50%. Try again next semester.";


	return 0;
}

//Option 1 - Passing Class
/* Please Enter Five HW Scores [0-100]:
95
96
97
94
93
Please Enter Five Lab Scores [0-100]:
98
97
96
95
92


Homework and Lab Scores Are:
	1		2		3		4		5

**********************************************************************************************************************
HW   	 95.000000  	 96.000000  	 97.000000  	 94.000000  	 93.000000
LAB   	 98.000000  	 97.000000  	 96.000000  	 95.000000  	 92.000000

AVG   	 96.500000  	 96.500000  	 96.500000  	 94.500000  	 92.500000


Best Homework:		97.000000 Worst Homework:		93.000000 Average Homework:		95.000000

Best Lab:		98.000000 Worst Lab:			92.000000 Average Lab:			95.600000


Overall Grade:		95.300000

Congratulations, You Passed The Class!
*/



// Option 2 - Failing Class
/*Please Enter Five HW Scores [0-100]:
21
2
22
32
23
Please Enter Five Lab Scores [0-100]:
24
25
23
21
1


Homework and Lab Scores Are:
	1		2		3		4		5

**********************************************************************************************************************
HW   	 21.000000  	 2.000000  	 22.000000  	 32.000000  	 23.000000
LAB   	 24.000000  	 25.000000  	 23.000000  	 21.000000  	 1.000000

AVG   	 22.500000  	 13.500000  	 22.500000  	 26.500000  	 12.000000


Best Homework:		32.000000 Worst Homework:		23.000000 Average Homework:		20.000000

Best Lab:		25.000000 Worst Lab:			1.000000 Average Lab:			18.800000


Overall Grade:		19.400000

I’m sorry to inform you that you failed the class, because your performance in the class was <50%. Try again next semester.
*/
