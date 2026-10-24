#pragma once



class Product
{
private:
	char* name;
	double price;
	int weight;
	int discount;

public:
	Product(const char* newName, double newPrice, int newWeight, int newDiscount) : name(nullptr), price(0), weight(newWeight), discount(0) 
	{
		setName(newName);
		setPrice(newPrice);
		setDiscount(newDiscount);
	}

	Product(const char* newName, double newPrice) : Product(newName, newPrice, 1000, 0){}

	~Product(){
		delete[] name;
	}

	double getFinalPrice() const;
	bool isOnSale() const;

	void setName(const char* newName);
	bool setPrice(double newPrice);
	bool setDiscount(int newDiscount);

	void print();
};

inline double Product::getFinalPrice() const {
	return price - (price * ((double)discount / 100));
}

inline bool Product::isOnSale() const {
	return discount > 0;
}

