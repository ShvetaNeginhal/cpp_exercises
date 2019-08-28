#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
bool mycomp(string a, string b) {
	return a < b;
}
int main()
{
	ifstream infile;

	int chr;
	char ch;
	string x = "";
	int count = 0;
	vector<string> names;
	infile.open("D:\\names.txt");
	ofstream outfile("D:\\newSorted.txt");
	if (!infile.is_open())
		cout << "File not found\n";
	while (!infile.eof()) {
		infile.get(ch);
		chr = static_cast<int>(toupper(ch));
		if (chr >= 65 && chr <= 90) {
			x = x + char(chr);
		}
		else if (char(chr) == ',') {
			names.push_back(x);
			x = "";
		}

	}
	names.push_back(x);

	sort(names.begin(), names.end(), mycomp);

	// Loop to print names
	int y = 0;

	unsigned long long total = 0;
	for (int i = 0; i < names.size(); i++) {
		outfile << names[i] << endl;
		count++;
		y = 0;
		for (int j = 0; j < names[i].size(); j++) {

			y += ((int)names[i][j] - 64);

		}
		total += y * count;
	}


	cout << total << endl;


	infile.close();
	outfile.close();
	return 0;
}

