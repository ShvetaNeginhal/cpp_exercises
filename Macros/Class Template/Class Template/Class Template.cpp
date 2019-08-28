
#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

template<typename T1,typename T2>
class ValuePair
{
	T1 val1;
	T2 val2;
public:
	ValuePair(T1 v1,T2 v2):val1(v1),val2(v2){}
	void setValue1(T1 v1) { val1 = v1; }
	void setValue2(T2 v2);
	T1 getVal1(){ return val1; }
	T2 getVal2() { return val2; }
};

template<typename T1,typename T2>
void ValuePair<T1,T2>::setValue2(T2 v2)
{
	val2 = v2;
}


#define SIZE 10
template<class T>
class Stack
{
	T arr[SIZE];
	int top;
public:
	Stack():top(-1){
		
	}
	//Stack(T arr[SIZE], int top) :arr(arr), top(top) {}
	
	void push(const T& item)
	{	
		
		arr[top + 1] = item;
		cout << "Pushed" << arr[top + 1]<<endl;
	}

	T pop()
	{
		T popped;
		popped = arr[top];
		arr[top] = NULL;
		top--;
		//cout << "arr[top] = " << arr[top];
		return arr[top];
	}
	void display()
	{
		for (int i = 0; i < top; i++)
		{
			cout << arr[i]<<endl;
		}
	}

	~Stack() { top = -1; }
};


int main()
{
	/*ValuePair<int, int> vp1(10, 20);
	ValuePair<string,string> vp2("C", "C++");
	ValuePair<float,float> vp3(33.4, 88.7);
	ValuePair<string,int> vp4("str", 100);
	return 0;
*/
	//int arr[5];
	Stack<int> s;
	s.push(100);
	s.push(200);
	s.push(300);
	//cout<< s.display() << endl;
	cout << s.pop() << endl;
	s.display();
}
