#include "pch.h"
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int WordCount(string fname)
{
	ifstream inFile;
	inFile.open(fname);
	int c = 0;
	char word[90];
	while (!inFile.eof())
	{
		inFile >> word;
		c++;
	}
	inFile.close();
	return c;
}
int main()
{
	
	//ofstream outFile("D:\\test2.txt",ios::app);
	//string f;
	/*char a = 'a';
	for (int i = 1; i <= 26; i++) {
		outFile.put(a);
		a++;
	}*/
	//Write word/line
	/*outFile << "Hello World!" << endl;
	outFile.close();*/
	
	/*cout << "Write names";
	for (int i = 0; i < 5; i++) {
		cin >> f;
		outFile<<f;
		outFile << endl;
	}*/

	//Read data from file
	/*ifstream inFile;
	inFile.open("D:\\test2.txt");
	ofstream outFile("D:\\testbx.txt");*/
	//read ch by ch;
	//char ch;
	//while (!inFile.eof())
	//{
	//	inFile.get(ch);
	//	
	//	outFile<<(char)toupper(ch);
	//	//cout << ch << endl;
	//}
	// read word by word
	/*char word[40];
	while (!inFile.eof())
	{
		inFile >> word;
		cout << word<<endl;
	}
*/

	int c = WordCount("D:\\test2.txt");
	cout << "Count = " << c;
	/*inFile.close();
	outFile.close();*/

	
}

