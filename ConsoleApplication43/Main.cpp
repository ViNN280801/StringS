#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include "Header.h"
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int w;
	printf("Enter number of task: ");
	scanf("%hu", &w);
	system("cls");
	switch (w)
	{
	case 1:
	{
		//1.� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������. ����� ��� �������� ��������.
		char string[] = "asd�kadn�gfdgdsea";
		int length = strlen(string);

		printf("Begginning: \n");
		printf("%s\n", string);

		for (short int i = 0; i < length; i++)
			if (*(string + i) == '�' || *(string + i) == '�')
				*(string + i) = ' ';

		printf("\n");
		printf("Result: \n");
		printf("%s\n", string);
	}
	break;
	case 2:
	{
		//2.� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������.
		char *mas = NULL;
		int count = 0;

		mas = (char*)malloc(sizeof(char));

		printf("Enter string: ");
		scanf("%s", mas);

		for (short int i = 0; i < strlen(mas); i++)
			if (*(mas + i) != *(mas + i - 1))
				count++;
		printf("Count of different symbols is %d\n", count - 1);
	}
	break;
	case 3:
	{
		//3.� �������� ������ ����������� � �������� ������� ��� �����. ������������� ���� ��������� �������.
		char *str = "Hello, world. ";
		int length = strlen(str), i = 0;
		char beginning, end;

		str = (char*)malloc(length * sizeof(char));

		*(str + length) = '\0';

		for (; i < length; i++)
		{
			if (*(str + i) == ' ')
			{
				end = *(str + i - 1);
				beginning = *(str + i + 1);
			}
		}

		char *Hello = NULL, *World = NULL;

		Hello = (char*)malloc(sizeof(char));
		World = (char*)malloc(sizeof(char));

		int length2, length3;
		length2 = strlen(Hello);
		length3 = strlen(World);
		*(Hello + length2) = '\0';
		*(World + length3) = '\0';

		for (i = 0; i < end; i++)
		{
			*(Hello + i) = *(str + i);
			printf("%c ", Hello);
		}

		for (i = beginning; i >= length - 1; i++)
		{
			*(World + i) = *(str + i);
			printf("%c\n", World);
		}

		//printf("%s %s\n", World, Hello);

		//��� � �� ���������� � ��� ������, ��� ������, �� ������ ��� ��� ����� ����������, � ������� � ����������� ��������� �����.
		//� ��������������� ��� printf � ������, � ��������� ������ �� ����������, ��� ������ ��� �� ������ ���������� �����, ��� ��� ���������?
	}
	break;
	case 4:
	{
		//4.� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����. ������������� ���� ��������� �������.
		char *mas = NULL;
		int count = 0;

		mas = (char*)malloc(sizeof(char));

		printf("Enter string: ");
		scanf("%s", mas);

		int length = strlen(mas);

		for (short int i = 0; i < length; i++)
			if (*(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == 'C' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�' || *(mas + i) == '�')
				count++;

		printf("Count of russian letters - %d\n", count);
	}
	break;
	case 5:
	{
		//5.�� �������� ������ �������� ������ ����, �������� � ��� ������. ������������� ���� ��������� �������.
		char *mas = "Greatfire in London was in 1666.";
		int length = strlen(mas), count = 0;
		char beginning, end;
		char mas1[100];

		mas = (char*)malloc(sizeof(char));

		for (short int i = 0; i < length; i++)
		{
			if (*(mas + i) == ' ')
			{
				end = *(mas + i - 1);
				beginning = *(mas + i + 1);
				count++;

			}
		}

		printf("Count of words - %d\n", count);

		for (short int i = 0; i < end; i++)
		{
			*(mas + i) = mas1[i];
			printf("%c", mas1[i]);
		}

		for (short int i = beginning; i < end; i++)
		{
			*(mas + i) = mas1[i];
			printf("%c", mas1[i]);
		}
		//�� ������ ���������� �����, �� ���� ��� ������ :(
	}
	break;
	case 6:
	{
		//6.��� ������ ��������. ����������, ������� ��������� �������� ����������� � ���.������� �� �� �����.
		char mas[20] = "Hello, world.";
		int count = 0;

		for (short int i = 0; i < strlen(mas); i++)
			if (mas[i] != mas[i + 1])
				count++;
		printf("Count of different symbols is %d\n", count - 1);
	}
	break;
	case 7:
	{
		//7.��� ������ ��������. ���������� ����� ������� ������������������ ������ ������ ���� �.
		char mas[40] = "bgawaaaarwghfghfghrtdrewqaaaaaaaaa";
		int k = 0, count = 0;

		printf("Indexes, where is the most largest group of symbol - 'a'\n");
		for (short int i = 0; i < 40; i++)
		{
			if (mas[i] == 'a' && mas[i + 1] == 'a')
			{
				k = i;
				count++;
				if (count >= 5)
					printf("index = %d\n", k);
			}
		}
	}
	break;
	case 8:
	{
		//8.��� ������ ��������, ����� ������� ���� ������������� � ������������� ������. ������� �� ����� ������� ��������, ������������� ������ ���� ������.
		char mas[20] = "Hello (world).";
		char begin, end;
		char *mas2 = NULL;

		mas2 = (char*)malloc(sizeof(char));

		for (short int i = 0; i < strlen(mas); i++)
		{
			if (mas[i] == '(' || mas[i + 1] == ')')
			{
				begin = mas[i];
				end = mas[i + 1];
			}

		}

		for (short int i = begin + 1; i < end - 1; i++)
		{
			*mas2 = mas[i];
			printf("%s", mas2);
		}
		printf("\n");

		//������-�� ������ �� �������.
	}
	break;
	case 9:
	{
		//9.��� ������ ��������, ���������� �����. ���������� ���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ���.
		char mas[20] = "HellO, worlD.";
		int stringSymbols = 0, writeSymbols = 0;
		float string, write, all = 100.00;

		for (short int i = 0; i < strlen(mas); i++)
		{
			if (mas[i] == 'H' || mas[i] == 'O' || mas[i] == 'D')
				stringSymbols++;
			else if (mas[i] == 'e' || mas[i] == 'l' || mas[i] == 'w' || mas[i] == 'o' || mas[i] == 'r')
				writeSymbols++;
		}
		printf("String symbols are %d\n", stringSymbols);
		printf("Write symbols are %d\n", writeSymbols);
		printf("\n");

		string = (stringSymbols * 100) / (stringSymbols + writeSymbols);
		write = (writeSymbols * 100) / (stringSymbols + writeSymbols);

		printf("String symbols are %f percent.\n", string);
		printf("Write symbols are %f percent.\n", write);
	}
	break;
	case 10:
	{
		//10.	��� ������ ��������, ����� ������� ���� ���� ������������� � ���� ������������� ������. ������� �� ����� ��� �������, ������������� ������ ���� ������.
			char mas[20] = "Hello (world).";
		char begin, end;
		char *mas2 = NULL;

		mas2 = (char*)malloc(sizeof(char));

		for (short int i = 0; i < strlen(mas); i++)
		{
			if (mas[i] == '(' || mas[i + 1] == ')')
			{
				begin = mas[i];
				end = mas[i + 1];
			}

		}

		for (short int i = begin + 1; i < end - 1; i++)
		{
			*mas2 = mas[i];
			printf("%s", mas2);
		}
		printf("\n");

		//������-�� ������ �� �������.
	}
	break;
	}
}