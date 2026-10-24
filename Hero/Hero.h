#pragma once

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

class Hero
{
private:
	char* name;
	int level;
	int health;
	int attack;

public:
	Hero(const char* newName, int newLevel, int newHealth, int newAttack) : name(nullptr), level(newLevel), health(0), attack(0){
		setName(newName);
		setHealth(newHealth);
		setAttack(newAttack);
	}

	Hero(const char* newName) : Hero(newName, 1, 100, 10){}

	~Hero() {
		delete[] name;
	}

	const char* getName() const;
	int getHealth() const;
	int getAttack() const;
	bool isAlive() const;

	void setName(const char* newName);
	bool setHealth(int newHealth);
	bool setAttack(int newAttack);

	void takeDamage(int damage);
	void print();
};

inline const char* Hero::getName() const{
	return name;
}

inline int Hero::getHealth() const {
	return health;
}

inline int Hero::getAttack() const{
	return attack;
}

inline bool Hero::isAlive() const {
	return health > 0;
}