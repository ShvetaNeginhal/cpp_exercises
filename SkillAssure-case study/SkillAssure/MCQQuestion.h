#pragma once
#include "Question.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;
class MCQQuestion :
	public Question
{
private:
	string queName;
	string op1;
	string op2;
	string op3;
	string op4;
	string rightOption;
	vector <int> no_MCQ;
public:
	MCQQuestion(string queName, string op1, string op2, string op3, string op4, 
		string rightOption,int marks);
	int getNoOfMCQQuestions();
	~MCQQuestion();
};

