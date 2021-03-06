

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

void FIFO()
{
	cout << "FIFO" << endl;
	int i, iG, count = 0; //счётчики
	int nP;	//Порядок обращения страниц 
	int nM = 3; //Кол ячеек памяти
	int diagonal = 0; // "диагональ" памяти 
	bool Exitflag; //флаг выхода из цикла
	int *M_Memory = new int[nM];  //Инициализаяция виртуальной памяти
	cout << "Количество обращений к страницам = ";
	cin >> nP;
	cout << "Введите порядок страниц" << endl;
	int *M_Page = new int[nP];	   //Выделение памяти под массив порядка обращения страниц 
	for (int i = 0; i < nP; i++)
	{
		cout << i << "-я страница = ";
		cin >> M_Page[i];
	}

	for (iG = 0; iG < nP; iG++)  //запуск замещения
	{

		if (diagonal < nM) //Проверка диагонали, заполнение памяти
		{
			for (i = 0; i <= nM; i++)
			{
				if (M_Page[iG] == M_Memory[i])
				{
					Exitflag = false;
					break;
				}
				else if (M_Page[iG] != M_Memory[i]) {
					Exitflag = true;
				}
				else {
					Exitflag = false;
				}
			}

			if (!Exitflag)
			{
				continue;
			}
			else {
				M_Memory[diagonal] = M_Page[iG];
				diagonal++;

				for (i = 0; i < nM; i++)
				{
					cout << M_Memory[i];
				}

				cout << endl;


				continue;
			}


		}

		for (i = 0; i <= nM; i++) //замещение страниц
		{
			if (M_Page[iG] == M_Memory[i])
			{
				Exitflag = false;
				break;
			}
			else if (M_Page[iG] != M_Memory[i]) {
				Exitflag = true;
			}
			else {
				Exitflag = false;
			}
		}

		if (Exitflag == false)
		{
			continue;
		}
		else {
			if (count == 3)
			{
				count = 0;
			};

			M_Memory[count] = M_Page[iG];
			count++;
		}

		for (i = 0; i < nM; i++)
		{
			cout << M_Memory[i];
		}
		cout << endl;

	}

}


void RANDOM()
{
	cout << "RANDOM" << endl;
	int i, iG; //счётчики
	int nP;	//Порядок обращения страниц 
	int nM = 3; //Кол ячеек памяти
	int diagonal = 0; // "диагональ" памяти 
	bool Exitflag;
	int *M_Memory = new int[nM];  //Инициализаяция виртуальной памяти
	cout << "Количество обращений к страницам = ";
	cin >> nP;
	cout << "Введите порядок страниц" << endl;
	int *M_Page = new int[nP];		//Выделение памяти под массив порядка обращения страниц 
	for (int i = 0; i < nP; i++)
	{
		cout << i << "-я страница = ";
		cin >> M_Page[i];
	}

	for (iG = 0; iG < nP; iG++) //замещение страниц
	{

		if (diagonal < nM) //Проверка диагонали, заполнение памяти
		{
			for (i = 0; i <= nM; i++)
			{
				if (M_Page[iG] == M_Memory[i])
				{
					Exitflag = false;
					break;
				}
				else if (M_Page[iG] != M_Memory[i]) {
					Exitflag = true;
				}
				else {
					Exitflag = false;
				}
			}

			if (!Exitflag)
			{
				continue;
			}
			else {
				M_Memory[diagonal] = M_Page[iG];
				diagonal++;

				for (i = 0; i < nM; i++)
				{
					cout << M_Memory[i];
				}

				cout << endl;


				continue;
			}


		}

		for (i = 0; i <= nM; i++)
		{
			if (M_Page[iG] == M_Memory[i])
			{
				Exitflag = false;
				break;
			}
			else if (M_Page[iG] != M_Memory[i]) {
				Exitflag = true;
			}
			else {
				Exitflag = false;
			}
		}

		if (Exitflag == false)
		{
			continue;
		}
		else {
			M_Memory[rand() % 3] = M_Page[iG];
		}

		for (i = 0; i < nM; i++)
		{
			cout << M_Memory[i];
		}
		cout << endl;

	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	FIFO();
	cout << endl;
	cout << endl;
	RANDOM();
	return 0;
}
