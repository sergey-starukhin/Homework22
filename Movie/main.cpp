#include <iostream>
#include <Windows.h>
#include "Movie.h"

using namespace std;

//Створити клас Movie(фільм).
//- private - поля: char* title, int year, int duration(тривалість у хвилинах), double rating.
//- Модифікатор setTitle(newTitle) — як setName у Student.
//- Модифікатор setDuration(newDuration) — лише від 1 до 300, повертає bool.
//- Модифікатор setRating(newRating) — лише від 0 до 10, повертає bool.
//- ГОЛОВНИЙ конструктор Movie(newTitle, newYear, newDuration, newRating) :
//	у списку ініціалізації — title(nullptr), year(newYear), duration(0), rating(0);
//у тілі — виклики setTitle(), setDuration(), setRating().
//- ДЕЛЕГУЮЧИЙ конструктор Movie(newTitle, newYear) — передає головному тривалість 90 і рейтинг 0.
//- Деструктор — звільняє пам'ять, виділену під назву.
//- Інспектор isLong() — повертає true, якщо фільм триває більше 120 хвилин.
//- Метод print() — виводить :
//назву,
//рік,
//рейтинг
//і тривалість у форматі «2 год 15 хв»(години : duration / 60, хвилини : duration % 60),
//а також позначку «довгий», якщо isLong() повертає true.
//- У main :
//створіть два фільми головним конструктором(один довший за 120 хв) і один делегуючим;
//спробуйте створити фільм із рейтингом 15 — переконайтеся, що рейтинг залишився 0;
//виведіть усі фільми.

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Movie terminator2("Терминатор 2: Судный день", 1991, 156, 8.6);
    Movie worstFilm("Баллистика: Экс против Сивер", 2002);
    Movie worstFilm2("Манос: Руки судьбы", 1966, 74, 15);

    terminator2.print();
    cout << endl;
    worstFilm.print();
    cout << endl;
    worstFilm2.print();

    return 0;
}