#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Question.h"
using namespace std;
class Assessment
{
private:
	int assId;
	string desc;
	int noQuestion;
	string dtAssessment;

	vector <Question> questions;
	int getTotalMarks();
	
public:
	Assessment(int assId, string desc, int noQuestion, string dtAssessment);
	
	int getMarks();
	~Assessment();
};

