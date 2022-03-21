#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Prototypes.h"

struct country *a = 0;      ///Выделение дин памяти для структуры
int size = 0;               ///Количество имеющихся структур

void read()                 ///Считывание из файла уже имеющиеся данные
{
    int ip = 0;
    FILE *f = fopen("Country.txt", "r");
    if (feof(f))
        printf("В файле нет данных");
    else
        while (!feof(f))
        {
            if (ip == size)
            {
                ip += 1;
                a = (struct country*)realloc(a, (ip * 2) * sizeof(struct country));
            }
            fscanf(f, "%s", a[size].name);
            fscanf(f, "%s", a[size].capital);
            fscanf(f, "%s", a[size].side);
            fscanf(f, "%ld", &a[size].people);
            fscanf(f, "%lf", &a[size++].area);
        }
    fclose(f);
}

void write(char name[])     ///Вывести инф - цию о конкретной стране
{
    int j;
    for (j = 0; (strcmp(a[j].name, name) != 0) && j < size; j++)
        ;
    if (strcmp(a[j].name, name) == 0)
    {
        printf("%s ", a[j].name);
        printf("%s ", a[j].capital);
        printf("%s ", a[j].side);
        printf("%ld ", a[j].people);
        printf("%f\n", a[j].area);
    }
    else
        printf("Страны %s нет в файле\n", name);
}

void add()                  ///Запись новых данных в файл
{
    FILE *f = fopen("Country.txt", "a");
    a = (struct country*)realloc(a, (size + 1) * sizeof(struct country));
    printf("Введите название страны ");
    scanf("%s", a[size].name);
    fprintf(f, "\n%s ", a[size].name);
    printf("Введите название столицы ");
    scanf("%s", a[size].capital);
    fprintf(f, "%s ", a[size].capital);
    printf("Введите сторону света ");
    scanf("%s", a[size].side);
    fprintf(f, "%s ", a[size].side);
    printf("Введите численность людей ");
    scanf("%ld", &a[size].people);
    fprintf(f, "%ld ", a[size].people);
    printf("Введите площадь страны ");
    scanf("%lf", &a[size].area);
    fprintf(f, "%f", a[size++].area);
    fclose(f);
}

void capital(char name[])   ///Вывод столицы по названию страны
{
    int j;
    for (j = 0; (strcmp(a[j].name, name) != 0) && j < size; j++)
        ;
    if (strcmp(a[j].name, name) == 0)
        printf("Столица %s - %s\n", a[j].name, a[j].capital);
    else
        printf("Страны %s нет в файле\n", name);
}

void country(char capital[])    ///Вывод страны по столице
{
    int j;
    for (j = 0; (strcmp(a[j].capital, capital) != 0) && j < size; j++)
        ;
    if (strcmp(a[j].capital, capital) == 0)
        printf("%s столица %s\n", a[j].capital, a[j].name);
    else
        printf("Столицы %s нет в файле\n", capital);
}

void allcountry(char side[])    ///Вывод всех страны в определенной части света
{
    int j;
    for (j = 0; j < size; j++)
        if (strcmp(a[j].side, side) == 0)
            printf("%s\n", a[j].name);
}

void countcountry(char side[])  ///Вывод всех страны в определенной части света
{
    int j, count = 0;
    for (j = 0; j < size; j++)
        if (strcmp(a[j].side, side) == 0)
            count++;
    printf("Количество стран в %s : %d\n", side, count);
}

void allarea(char side[])       ///Подсчет общей площади всех стран в определенной части света
{
    int j;
    double allarea = 0;
    for (j = 0; j < size; j++)
        if (strcmp(a[j].side, side) == 0)
            allarea += a[j].area;
    printf("Общая площадь государств в %s : %f\n", side, allarea);
}

void density()                  ///Вывод плотности населения во всех странах
{
    int j;
    for (j = 0; j < size; j++)
        printf("Плотность населения (тыс. чел на 1 кв. км) в %s : %f\n", a[j].name, (a[j].people * 1000000) / (a[j].area * 1000));
}

void showflag(char country[])   ///Показать флаг страны
{
    char s[MAXLEN] = "Флаги\\\\";
    strcat(s, country);
    strcat(s, ".jpg");
    system(s);
}

void showcapital(char country[])    ///Показать столицу страны
{
    char s[MAXLEN] = "Столицы\\\\";
    strcat(s, country);
    strcat(s, ".jpg");
    system(s);
}

void playgimn(char county[])    ///Включить гимн страны
{
    char s[MAXLEN] = "Гимны\\\\";
    strcat(s, county);
    strcat(s, ".mp3");
    system(s);
}
