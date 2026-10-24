#include <iostream>
#include <windows.h>
#include <cstring>
#include "Product.h"

using namespace std;

bool Product::setPrice(double newPrice) {
	if (newPrice < 0)
		return false;
	price = newPrice;
	return true;
}

bool Product::setDiscount(int newDiscount) {
	if (newDiscount < 0 || newDiscount > 50)
		return false;
	discount = newDiscount;
	return true;
}

void Product::setName(const char* newName) {
	delete[] name;
	int length = strlen(newName) + 1;
	name = new char[length];
	strcpy_s(name, length, newName);
}

void Product::print() {
	cout << "Товар: " << name << endl;
	cout << "Вес: " << weight / 1000 << " кг " << weight % 1000 << " грамм" << endl;	
	if (!isOnSale())
		cout << "Цена: " << price << endl;
	else
		cout << "АКЦИЯ! Цена со скидкой: " << getFinalPrice() << endl;
} 
