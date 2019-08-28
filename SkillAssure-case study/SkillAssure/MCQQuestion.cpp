#include "pch.h"
#include "MCQQuestion.h"





MCQQuestion::MCQQuestion(string queName, string op1, string op2, 
	string op3, string op4, string rightOption,int marks):queName(queName),
	op1(op1),op2(op2),op3(op3),op4(op4),rightOption(rightOption),Question(marks)
{
}

int MCQQuestion::getNoOfMCQQuestions()
{
	
	
}

MCQQuestion::~MCQQuestion()
{
}
