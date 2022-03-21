#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED

#define MAXLEN 100

struct country
{
    char name[MAXLEN];              ///�������� ������
    char capital[MAXLEN];           ///�������� �������
    char side[MAXLEN];              ///� ����� ������� ����� ���������
    long people;                    ///���������� �����
    double area;                    ///�������
};

void read();                        ///���������� �� ����� ��� ��������� ������
void add();                         ///������ ����� ������ � ����
void capital(char name[]);          ///����� ������� �� �������� ������
void country(char capital[]);       ///����� ������ �� �������
void write(char name[]);            ///������� ��� - ��� � ���������� ������
void allcountry(char side[]);       ///����� ���� ������ � ������������ ����� �����
void density();                     ///����� ��������� ��������� �� ���� �������
void countcountry(char side[]);     ///����� ���������� ����� � ������������ ����� �����
void allarea(char side[]);          ///������� ����� ������� ���� ����� � ������������ ����� �����
void showflag(char country[]);      ///�������� ���� ������
void playgimn(char country[]);      ///�������� ���� ������
void showcapital(char country[]);   ///�������� ������� ������

#endif
