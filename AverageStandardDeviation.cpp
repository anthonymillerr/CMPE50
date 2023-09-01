//============================================================================
// Name        : CMPE50-HW-2-1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : HW2_1
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;


void avgStdDev(double s1, double s2, double s3, double s4, double &average, double &stdDev);
double avg(double s1, double s2, double s3, double s4);
double stdev(double s1,double s2, double s3,double s4, double average);

int main()
{
    double s1, s2, s3, s4;
    double average, stdDev;
    char option;
do
    {
    cout <<"Enter Score for Score #1:";
    cin>>s1;
    cout <<"Enter Score for Score #2:";
    cin>>s2;
    cout <<"Enter Score for Score #3:";
    cin>>s3;
    cout <<"Enter Score for Score #4:";
    cin>>s4;

average = avg(s1,s2,s3,s4);
stdDev = stdev(s1,s2,s3,s4,average);
avgStdDev(s1, s2, s3, s4, average, stdDev);

cout<<"Would You Like to Enter Another Set of Scores? (Y/N): ";
cin>>option;
        }while (toupper(option)=='Y');
        return 0;
}
double avg(double s1, double s2, double s3, double s4)
{
    double average=(s1+s2+s3+s4)/4;
    return average;
}
double stdev(double s1,double s2, double s3,double s4, double average)
{
    double stdDev;
    stdDev = (pow((s1-average),2)+pow((s2-average),2)+pow((s3-average),2)
+pow((s4-average),2))/4;
    stdDev = sqrt(stdDev);
    return stdDev;
}
void avgStdDev(double s1, double s2, double s3, double s4, double &average, double &stdDev)
{
    avg(s1,s2,s3,s4);
    stdev(s1,s2,s3,s4, average);

    cout<< "Average of the Four Scores is:" << average << endl;
    cout<<"Standard Deviation of the Four Scores: " << stdDev << endl;

}

/*
Enter Score for Score #1:88
Enter Score for Score #2:98
Enter Score for Score #3:79
Enter Score for Score #4:69
Average of the Four Scores is:83.5						// Mean Output
Standard Deviation of the Four Scores: 10.7355			// SD Output
Would You Like to Enter Another Set of Scores? (Y/N): Y // Continues Program
Enter Score for Score #1:65
Enter Score for Score #2:75
Enter Score for Score #3:73
Enter Score for Score #4:94
Average of the Four Scores is:76.75						//Mean Output
Standard Deviation of the Four Scores: 10.639			//SD Output
Would You Like to Enter Another Set of Scores? (Y/N): N // Ends Program
 */
