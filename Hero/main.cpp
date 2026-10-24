#include <iostream>
#include <Windows.h>
#include "Hero.h"

using namespace std;

//Створити Клас Hero(герой гри).
//- private - поля: char* name, int level, int health(здоров'я), int attack (сила атаки).
//	- Модифікатор setName(newName) — як setName у Student.
//	- Модифікатор setHealth(newHealth) — лише від 0 до 100, повертає bool.
//	- Модифікатор setAttack(newAttack) — лише від 1 до 50, повертає bool.
//	- ГОЛОВНИЙ конструктор Hero(newName, newLevel, newHealth, newAttack) :
//	у списку ініціалізації — name(nullptr), level(newLevel), health(0), attack(0);
//у тілі — виклики setName(), setHealth(), setAttack().
//- ДЕЛЕГУЮЧИЙ конструктор Hero(newName) — новачок : передає головному рівень 1, здоров'я 100 і атаку 10.
//- Деструктор — звільняє пам'ять, виділену під ім'я.
//- Інспектори : getName(), getAttack().
//- Інспектор isAlive() — повертає true, якщо здоров'я більше 0.
//- Модифікатор takeDamage(damage) — зменшує здоров'я на damage; якщо результат менший за 0 — здоров'я стає 0.
//- Метод print() — виводить :
//ім'я,
//рівень,
//атаку,
//здоров'я у форматі «75/100»
//і стан : «живий» або «переможений»(за допомогою isAlive()).
//- У main :
//створіть героя головним конструктором і героя - новачка делегуючим;
//виведіть обох.
//Тричі завдайте новачку удару силою атаки першого героя і після кожного удару виведіть новачка.
//Спробуйте створити героя зі здоров'ям 150 — переконайтеся, що здоров'я 0.

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	Hero pendalf("Пендальф", 10, 100, 100);
	Hero fedor("Фёдор");
	Hero senya("Сеня", 1, 150, 5);

	pendalf.print();
	cout << endl;
	fedor.print();
	cout << endl;
	senya.print();
	cout << endl;
	cout << "Фёдор отказался нести кольцо и получил посохом по лбу!" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " атака" << endl;
		fedor.takeDamage(pendalf.getAttack());
		fedor.print();
		if (fedor.getHealth() == 0)
		{			
			cout << "С Фёдора хватит!" << endl;
			break;
		}
	}
	

	return 0;
}