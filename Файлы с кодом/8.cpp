#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Калькулятор" << endl;
	double a, b; char znak; int chk = 1;
	while (chk == 1) {
		cout << "Введите ваше выражение" << endl;
		cin >> a >> znak >> b;
		switch (znak) {
		case '+': {cout << a + b; break; }
		case '-': {cout << a - b; break; }
		case '*': {cout << a * b; break; }
		case '/': {cout << a / b; break; }
		}
		cout << endl<<"Продолжить?Введите 1 для продолжения,введите 2 для выхода" << endl; cin >> chk;
	}
}