#include "pch.h"
#include "Course.h"


Course::Course(string courseId, string name):courseId(courseId),name(name)
{
}

string Course::getCourseId()
{
	return courseId;
}

string Course::getName()
{
	return name;
}

Course::~Course()
{
}
