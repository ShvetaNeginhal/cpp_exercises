// Bookshelf.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This code is to read from a file and write to the console using Object Oriented Programing Concept

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Book
{

	string ISBN;
	string Book_Title;
	string Book_Author;
	string Year_Of_Publication;
	string Publisher;
	string Image_URL_S;
	string Image_URL_M;
	string Image_URL_L;
public:

	//Book(string a = NULL, string b = NULL, string c = NULL, string d = NULL, string e = NULL, string f = NULL, string g = NULL, string h = NULL) :ISBN(a), Book_Title(b), Book_Author(c), Year_Of_Publication(d), Publisher(e), Image_URL_S(f), Image_URL_M(g), Image_URL_L(h) {}
	void setISBN(string a) { ISBN = a; }
	void setBook_title(string b) { Book_Title = b; }
	void setBook_author(string c) { Book_Author = c; }
	void setyearofpublish(string d) { Year_Of_Publication = d; }
	void setPublisher(string e) { Publisher = e; }
	void setImageURL_S(string f) { Image_URL_S = f; }
	void setImageURL_M(string e) { Image_URL_M = e; }
	void setImageURL_L(string g) { Image_URL_L = g; }

	string getISBN() { return ISBN; }
	string getBook_title() { return Book_Title; }
	string getBook_author() { return Book_Author; }
	string getyearofpublish() { return Year_Of_Publication; }
	string getpublisher() { return Publisher; }
	string getImageURL_S() { return Image_URL_S; }
	string getImageURL_M() { return Image_URL_M; }
	string getImageURL_L() { return Image_URL_L; }

	vector<shared_ptr<Book>> getbook(string fname)
	{

		vector<shared_ptr<Book>> BB;
		ifstream fin(fname, ios::in);
		while (!fin.eof())
		{
			shared_ptr<Book> b1(new Book);
			getline(fin, b1->ISBN, ';');
			getline(fin, b1->Book_Title, ';');
			getline(fin, b1->Book_Author, ';');
			getline(fin, b1->Year_Of_Publication, ';');
			getline(fin, b1->Publisher, ';');
			getline(fin, b1->Image_URL_S, ';');
			getline(fin, b1->Image_URL_M, ';');
			getline(fin, b1->Image_URL_L, '\n');

			//cout << b1 << endl;
			if (!(b1->ISBN.empty()))
			{
				b1->ISBN = b1->ISBN.substr(1, (b1->ISBN.length() - 2));
				b1->Book_Title = b1->Book_Title.substr(1, (b1->Book_Title.length() - 2));
				b1->Book_Author = b1->Book_Author.substr(1, (b1->Book_Author.length() - 2));
				b1->Year_Of_Publication = b1->Year_Of_Publication.substr(1, (b1->Year_Of_Publication.length() - 2));
				b1->Publisher = b1->Publisher.substr(1, (b1->Publisher.length() - 2));
				b1->Image_URL_S = b1->Image_URL_S.substr(1, (b1->Image_URL_S.length() - 2));
				b1->Image_URL_M = b1->Image_URL_M.substr(1, (b1->Image_URL_M.length() - 2));
				b1->Image_URL_L = b1->Image_URL_L.substr(1, (b1->Image_URL_L.length() - 2));
			}
				/*cout << "ISBN \t Book Title \t Author \t Year \t Publisher \t ";
				cout << b1->ISBN << "\t";
				cout << b1->Book_Title << "\t";
				cout << b1->Book_Author << "\t";
				cout << b1->Year_Of_Publication << endl;*/
			BB.push_back(b1);

		}
		cout << BB.size() << endl;
		return BB;
	}
};
class BookManager
{
public:

	Book b;
	vector<shared_ptr<Book>> getbooks(string filename)
	{
		vector<shared_ptr<Book>> BBB;
		BBB = b.getbook(filename);
		cout << BBB.size() << endl;
		return BBB;
	}
};
int main()
{

	BookManager MGR;
	string fname = "D:\\Books.txt";
	auto books = MGR.getbooks(fname);
	cout << "Hello";
	for (int i = 1; i < books.size(); i++)
	{	cout<<"ISBN"<<"Book Title " << "Book Author";
		cout << books[i]->getISBN()<<"\t";
		cout <<books[i]->getBook_title() << "\t";
		cout << books[i]->getBook_author() << endl;
	}
	return 0;
}

