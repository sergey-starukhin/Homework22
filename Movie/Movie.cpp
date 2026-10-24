#include <iostream>
#include <Windows.h>
#include <cstring>
#include "Movie.h"

using namespace std;

bool Movie::setRating(double newRating)
{
    if (newRating < 0 || newRating > 10)
    {
        return false;
    }
    rating = newRating;
    return true;
}

bool Movie::setDuration(int newDuration)
{
    if (newDuration < 1 || newDuration > 300)
    {
        return false;
    }
    duration = newDuration;
    return true;
}

void Movie::setTitle(const char* newTitle)
{
    delete[] title;
    int length = strlen(newTitle) + 1;
    title = new char[length];
    strcpy_s(title, length, newTitle);
}

void Movie::print() const {
	cout << "Название: " << title << endl;
	cout << "Год: " << year << endl;
	cout << "Рейтинг: " << rating << endl;
	cout << "Продолжительность: " << "Часы: " << duration / 60 << " Минуты: " << duration % 60 << endl;
	if (isLong()) {
		cout << "Длинный" << endl;
	}
	else {
		cout << "Короткий" << endl;
	}
}

