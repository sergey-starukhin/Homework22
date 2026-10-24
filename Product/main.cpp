#include <iostream>
#include <Windows.h>
#include "Product.h"

using namespace std;

//Створити Клас Product(товар у магазині).
//- private - поля: char* name, double price, int weight(вага в грамах), int discount(знижка у відсотках).
//- Модифікатор setName(newName) — як setName у Student.
//- Модифікатор setPrice(newPrice) — лише >= 0, повертає bool.
//- Модифікатор setDiscount(newDiscount) — лише від 0 до 50, повертає bool.
//- ГОЛОВНИЙ конструктор Product(newName, newPrice, newWeight, newDiscount) :
//	у списку ініціалізації — name(nullptr), price(0), weight(newWeight), discount(0);
//у тілі — виклики setName(), setPrice(), setDiscount().
//- ДЕЛЕГУЮЧИЙ конструктор Product(newName, newPrice) — передає головному вагу 1000 і знижку 0.
//- Деструктор — звільняє пам'ять, виділену під назву.
//- Інспектор getFinalPrice() — повертає ціну зі знижкою : price - price * discount / 100.
//- Інспектор isOnSale() — повертає true, якщо знижка більша за 0.
//- Метод print() — виводить :
//назву,
//вагу у форматі «1 кг 250 г»(кілограми : weight / 1000, грами : weight % 1000),
//звичайну ціну,
//а якщо isOnSale() повертає true — ще й ціну зі знижкою та позначку «АКЦІЯ».
//- У main :
//створіть два товари головним конструктором(один зі знижкою) і один делегуючим;
//спробуйте створити товар зі знижкою 70 — переконайтеся, що знижка залишилася 0;
//виведіть усі товари.

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Product tv("TV", 10499, 5900, 10);
    Product fridge("Fridge", 17999, 54000, 70);
    Product gpu("Graphics Card", 29199);

    tv.print();
    cout << endl;
    fridge.print();
    cout << endl;
    gpu.print();

    return 0;
}