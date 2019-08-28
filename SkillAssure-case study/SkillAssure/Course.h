#pragma once
#include<iostream>
#include<string>
#include "Assessment.h"
using namespace std;
class Course
{
private:
	string courseId;
	string name;
	vector <Assessment> assessment;
public:
	Course(string courseId, string name);
	string getCourseId();
	string getName();
	~Course();
};

