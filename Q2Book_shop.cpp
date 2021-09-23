#include "Warehouse.h"
#include "Book_shop.h"

Book_shop::Book_shop() {
}

Book_shop::Book_shop(Warehouse W) {
	// This consturctor sets up a database of books for the book shop that is the same as the one for the warehouse except the number of copies are all set = 0
	num_hards = W.num_hards;
	num_softs = W.num_softs;
	num_mags = W.num_mags;

	string A, B, C; int D, E; float F;
	Hardbacks = new Hardback[W.num_hards];
	for (int i = 0; i < W.num_hards; i++) {
		A = W.Hardbacks[i].details->Author;
		B = W.Hardbacks[i].details->Title;
		C = W.Hardbacks[i].details->Publisher;
		D = W.Hardbacks[i].details->Edition;
		E = W.Hardbacks[i].details->Barcode;
		F = W.Hardbacks[i].Price;
		Hardbacks[i].Book_set_details(A, B, C, D, E, F, 0); // set num copies equal to zero (we dont copy this value from warehouse)
	}

	Softbacks = new Softback[W.num_softs];
	for (int i = 0; i < W.num_softs; i++) {
		A = W.Softbacks[i].details->Author;
		B = W.Softbacks[i].details->Title;
		C = W.Softbacks[i].details->Publisher;
		D = W.Softbacks[i].details->Edition;
		E = W.Softbacks[i].details->Barcode;
		F = W.Softbacks[i].Price;
		Softbacks[i].Book_set_details(A, B, C, D, E, F, 0); // set num copies equal to zero (we dont copy this value from warehouse)
	}

	Magazines = new Magazine[W.num_mags];
	for (int i = 0; i < W.num_mags; i++) {
		A = W.Magazines[i].details->Author;
		B = W.Magazines[i].details->Title;
		C = W.Magazines[i].details->Publisher;
		D = W.Magazines[i].details->Edition;
		E = W.Magazines[i].details->Barcode;
		F = W.Magazines[i].Price;
		Magazines[i].Book_set_details(A, B, C, D, E, F, 0); // set num copies equal to zero (we dont copy this value from warehouse)
	}
}


void Book_shop::sell(int barcode, int amount) {
	// Seraches for the hardback/sopftbackbook with the barcode and subtracts copies by amount
	//search for unique barcode and deduct amount by one 
	int i = 0;
	bool found = false;
	while ((i < num_hards) && (found == false)) {
		if (Hardbacks[i].details->Barcode == barcode) {
			if (Hardbacks[i].details->num_copies > 0) {
				Hardbacks[i].details->num_copies--;
			}
			else {
				cout << endl << "Out of stock." << endl;
			}
			found = true;
		}
		i++;
	}
	i = 0;
	while ((i < num_softs) && (found == false)) {
		if (Softbacks[i].details->Barcode == barcode) {
			if (Softbacks[i].details->num_copies > 0) {
				Softbacks[i].details->num_copies--;
			}
			else {
				cout << endl << "Out of stock." << endl;
			}
			found = true;
		}
		i++;
	}
	i = 0;
	while ((i < num_mags) && (found == false)) {
		if (Magazines[i].details->Barcode == barcode) {
			if (Magazines[i].details->num_copies > 0) {
				Magazines[i].details->num_copies--;
			}
			else {
				cout << endl << "Out of stock." << endl;
			}
			found = true;
		}
		i++;
	}
	if (found == false) {
		cout << endl << "No such book in database";
	}

}




