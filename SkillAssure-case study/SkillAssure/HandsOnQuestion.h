#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Question.h"
class HandsOnQuestion :
	public Question
{
private:
	string questionDesc;
	string referenceDocument;
public:
	HandsOnQuestion(string questionDesc, string referenceDocument,int marks);
	
	~HandsOnQuestion();
};

