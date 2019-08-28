#pragma once
#include<iostream>
#include<string>
#include "Course.h"
#include "Assessment.h"
#include<vector>
using namespace std;
class Iteration
{
private:
	int iterationNo;
	string goal;
	Course course;
	vector <Assessment> assessments;
public:
	Iteration(int iterationNo, string goal);
	int getIterationNo();
	string getGoal();
	~Iteration();
};

