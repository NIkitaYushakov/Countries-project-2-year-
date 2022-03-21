#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Prototypes.h"

struct country *a = 0;      ///��������� ��� ������ ��� ���������
int size = 0;               ///���������� ��������� ��������

void read()                 ///���������� �� ����� ��� ��������� ������
{
    int ip = 0;
    FILE *f = fopen("Country.txt", "r");
    if (feof(f))
        printf("� ����� ��� ������");
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

void write(char name[])     ///������� ��� - ��� � ���������� ������
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
        printf("������ %s ��� � �����\n", name);
}

void add()                  ///������ ����� ������ � ����
{
    FILE *f = fopen("Country.txt", "a");
    a = (struct country*)realloc(a, (size + 1) * sizeof(struct country));
    printf("������� �������� ������ ");
    scanf("%s", a[size].name);
    fprintf(f, "\n%s ", a[size].name);
    printf("������� �������� ������� ");
    scanf("%s", a[size].capital);
    fprintf(f, "%s ", a[size].capital);
    printf("������� ������� ����� ");
    scanf("%s", a[size].side);
    fprintf(f, "%s ", a[size].side);
    printf("������� ����������� ����� ");
    scanf("%ld", &a[size].people);
    fprintf(f, "%ld ", a[size].people);
    printf("������� ������� ������ ");
    scanf("%lf", &a[size].area);
    fprintf(f, "%f", a[size++].area);
    fclose(f);
}

void capital(char name[])   ///����� ������� �� �������� ������
{
    int j;
    for (j = 0; (strcmp(a[j].name, name) != 0) && j < size; j++)
        ;
    if (strcmp(a[j].name, name) == 0)
        printf("������� %s - %s\n", a[j].name, a[j].capital);
    else
        printf("������ %s ��� � �����\n", name);
}

void country(char capital[])    ///����� ������ �� �������
{
    int j;
    for (j = 0; (strcmp(a[j].capital, capital) != 0) && j < size; j++)
        ;
    if (strcmp(a[j].capital, capital) == 0)
        printf("%s ������� %s\n", a[j].capital, a[j].name);
    else
        printf("������� %s ��� � �����\n", capital);
}

void allcountry(char side[])    ///����� ���� ������ � ������������ ����� �����
{
    int j;
    for (j = 0; j < size; j++)
        if (strcmp(a[j].side, side) == 0)
            printf("%s\n", a[j].name);
}

void countcountry(char side[])  ///����� ���� ������ � ������������ ����� �����
{
    int j, count = 0;
    for (j = 0; j < size; j++)
        if (strcmp(a[j].side, side) == 0)
            count++;
    printf("���������� ����� � %s : %d\n", side, count);
}

void allarea(char side[])       ///������� ����� ������� ���� ����� � ������������ ����� �����
{
    int j;
    double allarea = 0;
    for (j = 0; j < size; j++)
        if (strcmp(a[j].side, side) == 0)
            allarea += a[j].area;
    printf("����� ������� ���������� � %s : %f\n", side, allarea);
}

void density()                  ///����� ��������� ��������� �� ���� �������
{
    int j;
    for (j = 0; j < size; j++)
        printf("��������� ��������� (���. ��� �� 1 ��. ��) � %s : %f\n", a[j].name, (a[j].people * 1000000) / (a[j].area * 1000));
}

void showflag(char country[])   ///�������� ���� ������
{
    char s[MAXLEN] = "�����\\\\";
    strcat(s, country);
    strcat(s, ".jpg");
    system(s);
}

void showcapital(char country[])    ///�������� ������� ������
{
    char s[MAXLEN] = "�������\\\\";
    strcat(s, country);
    strcat(s, ".jpg");
    system(s);
}

void playgimn(char county[])    ///�������� ���� ������
{
    char s[MAXLEN] = "�����\\\\";
    strcat(s, county);
    strcat(s, ".mp3");
    system(s);
}
