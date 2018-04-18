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
		//1.В заданной строке заменить каждый символ строки следующим по коду символом. Букву «я» заменить пробелом.
		char string[] = "asdЯkadnяgfdgdsea";
		int length = strlen(string);

		printf("Begginning: \n");
		printf("%s\n", string);

		for (short int i = 0; i < length; i++)
			if (*(string + i) == 'Я' || *(string + i) == 'я')
				*(string + i) = ' ';

		printf("\n");
		printf("Result: \n");
		printf("%s\n", string);
	}
	break;
	case 2:
	{
		//2.В заданной строке посчитать количество разных символов, входящих в эту строку.
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
		//3.В заданной строке расположить в обратном порядке все слова. Разделителями слов считаются пробелы.
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

		//Так и не разобрался в чём ошибка, при дебаге, он просто мои два цикла пропускает, в которых я посимвольно записываю слова.
		//Я закомментировал мой printf и видите, в консольке ничего не происходит, это значит что он просто пропускает циклы, как это исправить?
	}
	break;
	case 4:
	{
		//4.В заданной строке посчитать количество слов, содержащих только строчные русские буквы. Разделителями слов считаются пробелы.
		char *mas = NULL;
		int count = 0;

		mas = (char*)malloc(sizeof(char));

		printf("Enter string: ");
		scanf("%s", mas);

		int length = strlen(mas);

		for (short int i = 0; i < length; i++)
			if (*(mas + i) == 'А' || *(mas + i) == 'а' || *(mas + i) == 'Е' || *(mas + i) == 'е' || *(mas + i) == 'Ё' || *(mas + i) == 'ё' || *(mas + i) == 'И' || *(mas + i) == 'и' || *(mas + i) == 'Й' || *(mas + i) == 'й' || *(mas + i) == 'О' || *(mas + i) == 'о' || *(mas + i) == 'У' || *(mas + i) == 'у' || *(mas + i) == 'Ы' || *(mas + i) == 'ы' || *(mas + i) == 'Э' || *(mas + i) == 'э' || *(mas + i) == 'Ю' || *(mas + i) == 'ю' || *(mas + i) == 'Я' || *(mas + i) == 'я' || *(mas + i) == 'Б' || *(mas + i) == 'б' || *(mas + i) == 'В' || *(mas + i) == 'в' || *(mas + i) == 'Г' || *(mas + i) == 'г' || *(mas + i) == 'Д' || *(mas + i) == 'д' || *(mas + i) == 'Ж' || *(mas + i) == 'ж' || *(mas + i) == 'З' || *(mas + i) == 'з' || *(mas + i) == 'К' || *(mas + i) == 'к' || *(mas + i) == 'Л' || *(mas + i) == 'л' || *(mas + i) == 'М' || *(mas + i) == 'м' || *(mas + i) == 'Н' || *(mas + i) == 'н' || *(mas + i) == 'П' || *(mas + i) == 'п' || *(mas + i) == 'Р' || *(mas + i) == 'р' || *(mas + i) == 'C' || *(mas + i) == 'с' || *(mas + i) == 'Т' || *(mas + i) == 'т' || *(mas + i) == 'Ф' || *(mas + i) == 'ф' || *(mas + i) == 'Х' || *(mas + i) == 'х' || *(mas + i) == 'Ц' || *(mas + i) == 'ц' || *(mas + i) == 'Ч' || *(mas + i) == 'ч' || *(mas + i) == 'Ш' || *(mas + i) == 'ш' || *(mas + i) == 'Щ' || *(mas + i) == 'щ')
				count++;

		printf("Count of russian letters - %d\n", count);
	}
	break;
	case 5:
	{
		//5.По заданной строке получить массив слов, входящих в эту строку. Разделителями слов считаются пробелы.
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
		//Он просто пропускает циклы, не знаю что делать :(
	}
	break;
	case 6:
	{
		//6.Дан массив символов. Подсчитать, сколько различных символов встречается в нем.Вывести их на экран.
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
		//7.Дан массив символов. Подсчитать самую длинную последовательность подряд идущих букв а.
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
		//8.Дан массив символов, среди которых есть открывающиеся и закрывающиеся скобки. Вывести на экран массивы символов, расположенные внутри этих скобок.
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

		//Почему-то ничего не выводит.
	}
	break;
	case 9:
	{
		//9.Дан массив символов, содержащий текст. Определить процентное отношение строчных и прописных букв к общему числу символов в нем.
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
		//10.	Дан массив символов, среди которых есть одна открывающаяся и одна закрывающаяся скобка. Вывести на экран все символы, расположенные внутри этих скобок.
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

		//Почему-то ничего не выводит.
	}
	break;
	}
}