#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите 2 числа через пробел" << endl;
	cin >> a >> b;
	cout << "Изначальные числа   " << a <<"   "<< b << endl;
	a = b * a;
	b = a / b;
	a = a / b;
	cout << "Поменянные числа   " << a <<"   "<< b << endl;
}
