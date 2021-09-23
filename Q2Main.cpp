// Lab9_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Book_details.h"
#include "Book.h"
#include "Warehouse.h"
#include "Book_shop.h"

int main(void)
{
	//request info to set up warehouse and shop
	int hard_copies, soft_copies, magazines;
	cout << endl << "Enter number of hardbacks in warehouse: "; cin >> hard_copies;
	cout << "Enter number of softbacks in warehouse: "; cin >> soft_copies;
	cout << "Enter number of magazines in warehouse: "; cin >> magazines;
	Warehouse Dublin_Warehouse(soft_copies, hard_copies, magazines);//the two integter are the number of harbacks and softbacks in the warehouse.
	Book_shop Mullingar(Dublin_Warehouse);

	Dublin_Warehouse.print_all_books();
	Mullingar.print_all_books();

	int barcode, copies;
	cout << endl << "Enter barcode to transfer"; cin >> barcode;
	cout << endl << "Enter number of copies to transfer"; cin >> copies;

	//Transfer Books
	Dublin_Warehouse.transfer(Mullingar, barcode, copies);

	//Check stock
	Dublin_Warehouse.print_all_books();
	Mullingar.print_all_books();

	//Sell one copy
	Mullingar.sell(barcode, 1);
	Mullingar.print_all_books();

	return(0);
}










//Book_details Book1("Pat O Brian", "Master and Commander", "Penguin", 2, 10110111);
//Book1.print_details();

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
