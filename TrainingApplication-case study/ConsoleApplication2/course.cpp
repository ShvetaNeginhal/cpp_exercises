#include "pch.h"
#include "course.h"



course::course(string coursename) :coursename(coursename)
{
}

void course::getmodules()
{
	for (int i = 0; i < modu.size(); i++) {
		cout<<modu[i].getmodname()<<endl;
	}
}



course::~course()
{
}
