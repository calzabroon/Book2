#pragma once
#include "Book_details.h"


class Book {
public:
	Book_details* details;
	float Price;
	Book();
	Book(string, string, string, int, int, float, int);
	void Book_set_details(string, string, string, int, int, float, int);
	void Book_print(void);
};

class Hardback : public Book {
public:
	Hardback();
	Hardback(string, string, string, int, int, float, int);
};

class Softback : public Book {
public:
	Softback();
	Softback(string, string, string, int, int, float, int);
};

class Magazine : public Book {
public:
	Magazine();
	Magazine(string, string, string, int, int, float, int);
};