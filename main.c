#include <stdio.h>
#include <locale.h>

#include "Prototypes.h"

int main()
{
    setlocale(LC_ALL, "");
    int opeation = 1;
    char b[MAXLEN];
    read();
    while (opeation != 0)
    {
        printf("Выберите операцию\n");
        printf("1 : Добавление информации о новой стране в файл\n");
        printf("2 : Определение столицы по названию государства\n");
        printf("3 : Определение названия государства по городу-столице\n");
        printf("4 : Вывод всей информации о заданном государстве\n");
        printf("5 : Вывод названий всех стран, расположенных в заданной части света\n");
        printf("6 : Расчёт и вывод плотности населения (в тыс. чел. на 1 кв. км) для каждого государства\n");
        printf("7 : Вывод количества государств, расположенных в заданной части света\n");
        printf("8 : Расчет общей площади государств, расположенных в заданной части света\n");
        printf("9 : Показать флаг страны по ее названию\n");
        printf("10 : Показать столицу государства по его названию\n");
        printf("11 : Включить гимн укащанной страны\n");
        printf("0 : Выход из программы\n");
        printf("Примечание: Все названия вводить с большой буквы на английском языке, все абривиатуры по типу United Kingdoms писать как UK\n");
        scanf("%d", &opeation);
        switch (opeation)
        {
            case 1:
                add();
                break;
            case 2:
                printf("Введите название государства ");
                scanf("%s", b);
                capital(b);
                break;
            case 3:
                printf("Введите город-столицу ");
                scanf("%s", b);
                country(b);
                break;
            case 4:
                printf("Введите название государства, информаию о котором хотите получить ");
                scanf("%s", b);
                write(b);
                break;
            case 5:
                printf("Введите часть света ");
                scanf("%s", b);
                allcountry(b);
                break;
            case 6:
                density();
                break;
            case 7:
                printf("Введите часть света ");
                scanf("%s", b);
                countcountry(b);
                break;
            case 8:
                printf("Введите часть света ");
                scanf("%s", b);
                allarea(b);
                break;
            case 9:
                printf("Введите название страны\n");
                scanf("%s", b);
                showflag(b);
                break;
            case 10:
                printf("Введите название страны\n");
                scanf("%s", b);
                showcapital(b);
                break;
            case 11:
                printf("Введите название страны\n");
                scanf("%s", b);
                playgimn(b);
                break;
            case 0:
                opeation = 0;
                break;
            default:
                printf("Неизвестный номер операции : %d\n", opeation);
                break;
        }
        getch();
        system("cls");
    }
    return 0;
}
