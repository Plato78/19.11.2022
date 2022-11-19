#include <iostream>
#include <ctime>
using namespace std;
int RootsCount( double A,  double B, double C) {
	double D = B * B - 4 * A * C;
	if (D > 0) return 2;
	if (D == 0) return 1;
	if (D < 0) return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	/*Proc16.Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
	−1, если X < 0; 0, если X = 0; 1, если X > 0.
		С помощью этой функции найти значение выражения Sign(A) + Sign(B)
		для данных вещественных чисел A и B*/
	/*double a, b;
	cin >> a >> b;
	cout << "a + b = " << sign(a) << sign(b) << endl;
	return 0;*/
	/*Proc17.Описать функцию RootsCount(A, B, C) целого типа, определяющую
		количество корней квадратного уравнения A·x^2 + B·x + C = 0 (A, B, C —
			вещественные параметры, A yt не равно = 0).С ее помощью найти количество корней
		для каждого из трех квадратных уравнений с данными коэффициентами.
		Количество корней определять по значению дискриминанта :
	D = B^2 − 4·A·C.*/
	double a, b, c;
	cin >> a >> b >> c;
	cout << RootsCount (a , b ,c) << endl;
}