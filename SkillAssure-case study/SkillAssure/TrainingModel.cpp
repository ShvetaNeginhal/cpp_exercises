#include "pch.h"
#include "TrainingModel.h"


TrainingModel::TrainingModel(int totAss, int no_MCQ, 
	int no_HandsOn, int no_TotalScore):totAss(totAss),
	no_MCQ(no_MCQ),no_HandsOn(no_HandsOn),no_TotalScore(no_TotalScore)

{
}

int TrainingModel::getTotalAssInTraining()
{
	return totAss;
}

int TrainingModel::getNoOfMCQAss()
{
	return no_MCQ;
}

int TrainingModel::getNoHandsOnBasedAss()
{
	return no_HandsOn;
}

int TrainingModel::getTotalScoreOfAllAss()
{
	return no_TotalScore;
}



