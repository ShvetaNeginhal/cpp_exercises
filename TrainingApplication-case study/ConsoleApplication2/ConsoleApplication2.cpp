#include "pch.h"
#include "Organization.h"
#include "trainer.h"
#include "trainee.h"
#include "course.h"
#include "modules.h"
#include "topic.h"
#include "unit.h"
#include <iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	Organization o("ABC");
	trainer t(20,"KVP",5);
	t.getOrganization(o);
	course c("Sketching");
	modules m1("Basic");
	modules m2("Pencil Handling");
	

}


