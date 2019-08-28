#include "pch.h"
#include "HandsOnQuestion.h"





HandsOnQuestion::HandsOnQuestion(string questionDesc,
	string referenceDocument, int marks):questionDesc(questionDesc),
	referenceDocument(referenceDocument),Question(marks)
{
}


HandsOnQuestion::~HandsOnQuestion()
{
}
