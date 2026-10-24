#include <iostream>
#include <cstring>
#include "Hero.h"

using namespace std;

bool Hero::setHealth(int newHealth) {
    if (newHealth < 0 || newHealth > 100)
        return false;
    health = newHealth;
    return true;
}

bool Hero::setAttack(int newAttack) {
    if (newAttack < 0 || newAttack > 100)
        return false;
    attack = newAttack;
    return true;
}

void Hero::setName(const char* newName)
{
    delete[] name;
    int length = strlen(newName) + 1;
    name = new char[length];
    strcpy_s(name, length, newName);
}

/// -Модифікатор takeDamage(damage) — зменшує здоров'я на damage; якщо результат менший за 0 — здоров'я стає 0.

void Hero::takeDamage(int damage) {
    if (damage > health)
        health = 0;
    else
        health -= damage;
}

void Hero::print() {
    cout << "Имя героя: " << name << endl;
    cout << "Уровень: " << level << endl;
    cout << "Атака: " << attack << endl;
    cout << "Здоровье: " << health << "\\100" << endl;
    if (isAlive())
        cout << "Живой" << endl;
    else
        cout << "Не очень живой" << endl;
}

