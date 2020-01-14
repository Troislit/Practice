#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Программа посчтитает корни квадратного уравнения" << endl;
	double a, b, c, x1, x2, x;int chk = 1;
	while(chk==1){
	cout << "Введите коэффицнты a b c" << endl;
	cin >> a >> b >> c;
	if ((a == 0)&&(b == 0)&&(c == 0))cout << "x=любое число" << endl;
	else {
		if ((a == 0) && (b == 0) && (c != 0))cout << "График не имеет точек пересечения с OX" << endl;
		else {
			if ((b * b - 4 * a * c) < 0) cout << "Уравнение не имеет действительных корней" << endl;
			else {
				if (a == 0) { x = -c / b; cout << "Корень уравнения " << endl << "x= " << x << endl; }
				else {
					x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
					x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
					cout << "Корни квадратного уравнения " << "x1= " << x1 << endl; cout << "x2= " << x2 << endl;
				}
			}
		}
	}
	cout << "Продолжить?Введите 1 чтобы продолжить,или 2 чтобы завершить:" << endl; cin >> chk;
	}
}