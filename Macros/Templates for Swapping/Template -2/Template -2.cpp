#include "pch.h"
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

template <typename T>
void swap1(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;

}
template <typename T>
void Display(T *acc, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Id = " << acc[i].getId()<<endl;
		cout << "Name = " << acc[i].getName()<<endl;
		cout << "Salary = " << acc[i].getSal() << endl;
	}
}
template <typename T>
bool check(T no1, T no2)
{
	if (no1 > no2)
		return 1;
	else
		return 0;
}
template <typename T>

void sort1(T *nos, int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (check(nos[i], nos[j]))
			{
				swap1(nos[i], nos[j]);

			}
		}
	}
}

//template<>
//void sort1(Acc **acc, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (strcmp(acc[i].getId(), acc[j].getId()) > 0)
//			{
//				swap1(acc[i].getId(), acc[j].getId());
//				
//			}
//		}
//	}
//}

class Acc
{
	string id;
	string name;
	int sal;
public:
	Acc(string id, string name, int sal) :id(id), name(name), sal(sal){}
	string getId(){ return id; }
	string getName() { return name; }
	int getSal() { return sal; }
	
	friend ostream& operator <<(ostream stream, const Acc& obj)
	{
		stream << endl << obj.getId() << "\t";
		<< obj.getName() << "\t";
		<< obj, getSal() << "\t";
	}

	bool operator > (const Acc& obj) const
	{
		return (this->getSal() > obj.getSal());
	}
};

int main()
{
	Acc acc[] = { Acc("0011","Rajesh",50000),
					Acc("0012","Kavya",60000),
					Acc("0013","Shoba",34000),
					Acc("0014","Prakash",23000),
					Acc("0015","Ashutosh",56000),
	};

	cout << "Accounts...Before" << endl;
	Display(acc, 5);

	sort1(acc, 5);
	cout<<"Accounts...After" << endl;
	Display(acc, 5);
}

