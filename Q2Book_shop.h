#pragma once
#include "Warehouse.h"

class Book_shop :public Warehouse {
public:
	Book_shop();
	Book_shop(Warehouse);
	void sell(int, int);
};