#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Данная программа поменяет 2 веведенных Вами числа местами" << endl;
	double a, b,c;
	cout << "Введите первое число" << endl;cin >> a;
	cout << "Введите второе число" << endl;cin >> b;
	cout << "Изначальные числа" << endl; cout << a << "  " << b << endl;
	c = b;b = a;a = c;
	cout << "Числа поменянные местами" << endl; cout << a << "  "<< b << endl;
}