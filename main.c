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
        printf("�������� ��������\n");
        printf("1 : ���������� ���������� � ����� ������ � ����\n");
        printf("2 : ����������� ������� �� �������� �����������\n");
        printf("3 : ����������� �������� ����������� �� ������-�������\n");
        printf("4 : ����� ���� ���������� � �������� �����������\n");
        printf("5 : ����� �������� ���� �����, ������������� � �������� ����� �����\n");
        printf("6 : ������ � ����� ��������� ��������� (� ���. ���. �� 1 ��. ��) ��� ������� �����������\n");
        printf("7 : ����� ���������� ����������, ������������� � �������� ����� �����\n");
        printf("8 : ������ ����� ������� ����������, ������������� � �������� ����� �����\n");
        printf("9 : �������� ���� ������ �� �� ��������\n");
        printf("10 : �������� ������� ����������� �� ��� ��������\n");
        printf("11 : �������� ���� ��������� ������\n");
        printf("0 : ����� �� ���������\n");
        printf("����������: ��� �������� ������� � ������� ����� �� ���������� �����, ��� ����������� �� ���� United Kingdoms ������ ��� UK\n");
        scanf("%d", &opeation);
        switch (opeation)
        {
            case 1:
                add();
                break;
            case 2:
                printf("������� �������� ����������� ");
                scanf("%s", b);
                capital(b);
                break;
            case 3:
                printf("������� �����-������� ");
                scanf("%s", b);
                country(b);
                break;
            case 4:
                printf("������� �������� �����������, ��������� � ������� ������ �������� ");
                scanf("%s", b);
                write(b);
                break;
            case 5:
                printf("������� ����� ����� ");
                scanf("%s", b);
                allcountry(b);
                break;
            case 6:
                density();
                break;
            case 7:
                printf("������� ����� ����� ");
                scanf("%s", b);
                countcountry(b);
                break;
            case 8:
                printf("������� ����� ����� ");
                scanf("%s", b);
                allarea(b);
                break;
            case 9:
                printf("������� �������� ������\n");
                scanf("%s", b);
                showflag(b);
                break;
            case 10:
                printf("������� �������� ������\n");
                scanf("%s", b);
                showcapital(b);
                break;
            case 11:
                printf("������� �������� ������\n");
                scanf("%s", b);
                playgimn(b);
                break;
            case 0:
                opeation = 0;
                break;
            default:
                printf("����������� ����� �������� : %d\n", opeation);
                break;
        }
        getch();
        system("cls");
    }
    return 0;
}
