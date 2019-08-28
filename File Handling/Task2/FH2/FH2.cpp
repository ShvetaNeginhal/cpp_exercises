#include "pch.h"
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

//int getVowelCount(string fname)
//{
//	ifstream infile;
//	infile.open(fname);
//	char ch;
//	int c = 0;
//	while (!infile.eof())
//	{
//		infile.get(ch);
//		if (ch == 'a' | ch == 'e' | ch == 'i' | ch == 'o' | ch == 'u')
//		{
//			c++;
//		}
//	}
//	return c;
//	infile.close();
//}

int NoOfLines(string fname)
{
	ifstream inFile;
	inFile.open(fname);
	if (!inFile)
	{
		throw "File Not found";
	}

	else {

		int no = 0;
		char ch[40];
		while (!inFile.eof())
		{
			if( inFile.getline(ch,40))
			//if (ch == '\n')
				no++;
		}
		return no;
		inFile.close();
	}
}
int main()
{
//	cout<<"No of vowels = "<<getVowelCount("D:\\test2.txt");
	try {
		cout << "no of Lines = " << NoOfLines("D:\\test2.txt");
	}
	catch(const char* msg)
	{
		cout << msg;
	}
}


