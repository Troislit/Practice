#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	double a2, b2;
	cin >> a >> b >> a2 >> b2;
	cout << "int è int  " << a + b << ' ' << a - b << ' ' << a * b << ' ' << a / b << endl;
	cout << "double è double  " << a2 + b2 << ' ' << a2 - b2 << ' ' << a2 * b2 << ' ' << a2 / b2 << endl;
	cout << "int è double  " << a + b2 << ' ' << a - b2 << ' ' << a * b2 << ' ' << a / b2 << endl;
	cout << "double è int  " << a2 + b << ' ' << a2 - b << ' ' << a2 * b << ' ' << a2 / b << endl;
}