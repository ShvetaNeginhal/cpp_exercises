#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Iteration.h"
using namespace std;
class TrainingModel
{
private:
	string clientName;
	int totAss, no_MCQ, no_HandsOn, no_TotalScore;
	vector <Iteration> iterations[3];
public:
	TrainingModel(int totAss, int no_MCQ, int no_HandsOn,int no_TotalScore);
	int getTotalAssInTraining();
	int getNoOfMCQAss();
	int getNoHandsOnBasedAss();
	int getTotalScoreOfAllAss();
	
};

