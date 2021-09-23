#pragma once
#include <string>
#include <iostream>
using namespace std;

class Book_details {
public:
	string Author;
	string Title;
	string Publisher;
	int Edition;
	int Barcode;
	int num_copies;
	Book_details();
	Book_details(string, string, string, int, int, int);
	void set_details(string, string, string, int, int, int);
	void print_details(void);
};


