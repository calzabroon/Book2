#pragma once
#include "book.h"

class Book_shop;//we use it in Warehouse before we define it..need declaration. 

class Warehouse {
public:
	Hardback* Hardbacks;
	Softback* Softbacks;
	Magazine* Magazines;
	int num_hards;
	int num_softs;
	int num_mags;


	Warehouse();
	Warehouse(int, int, int);
	void print_all_books();
	void transfer(Book_shop&, int, int);//using book_shop class before it is defined..must use pointer/reference as compiler cant know size of an object. ints are unique barcode and amount to transfer
};

