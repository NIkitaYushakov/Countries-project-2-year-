#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED

#define MAXLEN 100

struct country
{
    char name[MAXLEN];              ///Название страны
    char capital[MAXLEN];           ///Название столицы
    char side[MAXLEN];              ///В какой стороне света находится
    long people;                    ///Количество людей
    double area;                    ///Площадь
};

void read();                        ///Считывание из файла уже имеющиеся данные
void add();                         ///Запись новых данных в файл
void capital(char name[]);          ///Вывод столицы по названию страны
void country(char capital[]);       ///Вывод страны по столице
void write(char name[]);            ///Вывести инф - цию о конкретной стране
void allcountry(char side[]);       ///Вывод всех страны в определенной части света
void density();                     ///Вывод плотности населения во всех странах
void countcountry(char side[]);     ///Вывод количества стран в определенной части света
void allarea(char side[]);          ///Подсчет общей площади всех стран в определенной части света
void showflag(char country[]);      ///Показать флаг страны
void playgimn(char country[]);      ///Включить гимн страны
void showcapital(char country[]);   ///Показать столицу страны

#endif
