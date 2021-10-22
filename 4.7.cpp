﻿// Ткачишин Юрій
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Лабораторна робота 4.7
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "arth(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		n = 0; // вираз залежить від умови завдання варіанту
		a = x; // вираз залежить від умови завдання варіанту
		S = a;
		do {
			n++;
			R = ((2 * n - 1) * x * x) / (2 * n + 1); // вираз залежить від умови завдання варіанту
			a *= R;
			S += a;
		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << 0.5 * log((1 + x) / (1 - x)) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}