#include "pch.h"
#include "Iteration.h"


Iteration::Iteration(int iterationNo, string goal):iterationNo(iterationNo),
goal(goal)
{

}

int Iteration::getIterationNo()
{
	return iterationNo;
}

string Iteration::getGoal()
{
	return goal;
}

Iteration::~Iteration()
{
}
