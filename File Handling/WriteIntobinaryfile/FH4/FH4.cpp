#include "pch.h"
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

class Item
{
private:
	int itemId;
	string name;
	double price;
public:
	Item(){}
	Item(int id, string name,double p):itemId(id),name(name),price(p){}
	void setId(int id) { this ->itemId = id; }
	void setName(string name) { this->name = name; }
	void setPrice(double p) { this->price = p; }
	int getId() { return itemId; }
	string getName() { return name; }
	double getPrice() { return price; }

};

void writeItems()
{
	Item i;
	int id;
	cout << "Enter id";
	cin >> id;
	string name;
	cout << "enter name";
	cin >> name;
	double p;
	cout << "enter price";
	cin >> p;
	ofstream ofile("d:\\item_1.dat");
	
	i.setId(id);
	i.setName(name);
	i.setPrice(p);
	ofile.write((char*)&i, sizeof(i));
	ofile.close();
}

void readItems()
{
	ifstream ifile;
	ifile.open("d:\\item_1.dat",ios::app);
	Item book;
	cout << "Reading";
	while (ifile.read((char*)&book, sizeof(Item)))
	{
		cout << book.getId() << endl;
		cout << book.getName() << endl;
		cout << book.getPrice() << endl;
	}
	ifile.close();
}

void showItembyId(int itemid)
{
	ifstream ifile;
	ifile.open("d:\\item_1.dat");
	Item i1;
	cout << "Reading";
	ifile.read((char*)&i1, sizeof(Item));
	while (!ifile.eof())
	{
		if (itemid == i1.getId())
		{
			cout << i1.getName();
			cout << i1.getPrice();
		}
		else
		{
			cout << "Not found";
		}
	}
	

}


int main()
{
	//WRITE obj into binary file
	//Item i(1010, "Pen", 10);
	/*ofstream ofile("d:\\items.dat",ios::app);
	ofile.write((char*)&i, sizeof(i));
	ofile.close();
	ifstream ifile("d:\\items.dat",ios::binary);
	Item book;
	ifile.read((char*)&book, sizeof(book));
	ifile.close();
	cout << "ID: " << book.getId() << endl;
	cout << "Name: " << book.getName() << endl;
	cout << "Price: " << book.getPrice() << endl;*/

	
	//writeItems();
	//readItems();
	showItembyId(101);
}


