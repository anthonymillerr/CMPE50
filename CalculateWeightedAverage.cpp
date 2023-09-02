//============================================================================
// Name        : Lab6_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab6_01
//============================================================================


#include <iostream>
using namespace std;

class Student {

private:
double quiz[3];
double midtermExam;
double finalExam;
double weightedAverage;

public:
	Student() {
		quiz[0] = 0;
		quiz[1] = 0;
		quiz[2] = 0;
		midtermExam = 0;
		finalExam = 0;
		weightedAverage = 0;
	}

	void findQuizzes(double a, double b, double c)
	{
		if (a >= b && a >= c)
		{
			quiz[0] = a;
			if (b > c)
			{
				quiz[1] = b;
				quiz[2] = c;
			}
			else
			{
				quiz[1] = c;
				quiz[2] = b;
			}
		}
		else if (b >= a && b >= c)
		{
			quiz[0] = b;
			if (a > c)
			{
				quiz[1] = a;
				quiz[2] = c;
			}
			else
			{
				quiz[1] = c;
				quiz[2] = a;
			}
		}
		else if (c >= a && c >=b)
		{
			quiz[0] = c;
			if (b > a)
			{
				quiz[1] = b;
				quiz[2] = a;
			}
			else
			{
				quiz[1] = a;
				quiz[2] = b;
			}
		}
	}
	void setMidtermExam(double score) {
		if (score >= 0) midtermExam = score;
	}

	void setFinalExam(double score) {
		if (score >= 0) finalExam = score;
	}


	double getQuiz1() { return quiz[0]; }
	double getQuiz2() { return quiz[1]; }
	double getMidtermExam() { return midtermExam; }
	double getFinalExam() { return finalExam; }
	double getWeightedAverage() { return weightedAverage; }

	void calculateWeightedAverage() {
		weightedAverage = ((((quiz[0] + quiz[1]) / 20) * 0.25) + ((midtermExam / 100) * 0.25) + ((finalExam / 100) * 0.5)) * 100;
	}
};

	int main() {
		Student s1;

		double quiz1, quiz2, quiz3, val;
		cout << "Enter Quiz 1 Score out of 10: ";
		cin >> quiz1;

		cout << "Enter Quiz 2 Score out of 10: ";
		cin >> quiz2;

		cout << "Enter Quiz 3 Score out of 10: ";
		cin >> quiz3;
		s1.findQuizzes(quiz1,quiz2,quiz3);

		cout << "Best Two Quiz Scores Are:" << s1.getQuiz1() << " AND " << s1.getQuiz2() << endl;

		cout << "Enter Midterm Exam Score out of 100: ";
		cin >> val;
		s1.setMidtermExam(val);
		cout << "Enter Final Exam Score out of 100: ";
		cin >> val;
		s1.setFinalExam(val);

		s1.calculateWeightedAverage();

		cout << "The weighted average is: " << s1.getWeightedAverage() << endl;


		return 0;
	}

