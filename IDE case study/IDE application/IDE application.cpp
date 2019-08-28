// IDE application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

class ilang
	
{	public:
	virtual string getname() = 0;
	virtual string getunit() = 0;
	virtual string getpara() = 0;

};

class IDE 
{
private:
	ilang *language[3];
public:
	void addLang(ilang *il)
	{
		static int index = 0;
		language[index++] = il;
	}
	void DisplayDet()
	{
		for (int i = 0; i < 3; i++) {
				cout << "OOPS Language";
				language[i]->getname();
				language[i]->getunit();
				language[i]->getpara();
				cout << "--------------------" << endl;
		}
	}
	void displayOOLAng()
	{
		for (int i = 0; i < 3; i++) {
			if (language[i]->getunit() == "Object Oriented") {
				cout << "OOPs Languages" << endl;
				cout << language[i]->getname()<<endl;
				
			}

		}
	}
		void displayProc()
		{
		for (int i = 0; i < 3; i++) {
		 if (language[i]->getunit() == "Procedural") 
		 {
			 cout << "Procedural Languages" << endl;
			 cout << language[i]->getname()<<endl;
			}
		 }
		}

};

class oop : public ilang
{
public:
	 virtual string getunit()
	{
		cout << "Class"<<endl;
		return "Class";

	}
	 virtual string getpara()
	{
		cout << "Object Oriented" << endl;
		return "Object Oriented";
	}

};

class procedural : public ilang
{
public:
	virtual string getunit()
	{
		cout << "Function" << endl;
		return "Function";
	}
	virtual string getpara()
	{
		cout << "Procedural" << endl;
		return "Procedural";
	}

	
};

class langCSharp : public oop
{
public:
	
	string getname()
	{
		cout << "langCSharp" << endl;
		return "langCSharp";
	}
};

class langJava : public oop
{
public:
	
	string getname()
	{
		cout << "lang Java" << endl;
		return "lang Java";
	}
};
//class langC : public procedural,public oop,public ilang
//{
//public:
//
//	string getname()
//	{
//		cout << "Lang C" << endl;
//		return "Lang C";
//	}
//	string getunit()
//	{
//		oop::getunit();
//		procedural::getunit();
//		return "Procedural and OOPs";
//
//	}
//	string getpara()
//	{
//		oop::getpara();
//		procedural::getpara();
//		return "Function and Class";
//	}
//};
//

int main()
{
	/*langCSharp ob1;
	ob1.getname();
	ob1.getpara();
	ob1.getunit();

	langC ob2;
	ob2.getname();
	ob2.getpara();
	ob2.getunit();*/


	IDE ob;
	langCSharp ob1;
	//langC ob2;
	langJava ob3;
	ob.addLang(&ob1);
	//ob.addLang(&ob2);
	ob.addLang(&ob3);
	ob.DisplayDet();
	ob.displayOOLAng();
	ob.displayProc();


}