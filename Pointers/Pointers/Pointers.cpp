

#include "stdafx.h"
#include <iostream>
using namespace std;

double* Allocating(double* mass,int N) //Выдление памяти
{
	mass = new double[N]; 
	cout << endl;
	return mass;
}

double* Filling(double* mass, int N) // Заполнение массива
{
	for (int i = 0; i < N; i++)
	{
		cout << i << "-й элемент = "; cin >> mass[i];
	}
	cout << endl;
	return mass;
}

void Output(double* mass, int N) // Вывод на экран
{
	
	cout << "mass = [ ";
	for (int i = 0; i < N; i++)
	{
		cout << mass[i] << " ";
	}
	cout << "]";
	cout << endl;
}


double* DelMem(double* mass) // Освобождение памяти
{
	delete[] mass;
	mass = 0;
	cout << endl;
	return mass;
}


int main() //Главная программа
{
	setlocale(LC_ALL, "rus");
	double* mass = 0; //динамический массива
	int N;
	cout << "Разер массива = "; cin >> N;

	mass = Allocating(mass, N); //Выдление памяти
	Filling(mass, N); // Заполнение массива
	Output(mass, N); // Вывод на экран
	mass = DelMem(mass); // Освобождение памяти

    return 0;
}

