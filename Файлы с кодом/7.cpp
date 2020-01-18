#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int sposob,chk;
	chk = 1;
	while(chk==1){
	cout << "Данная программа посчитает площадь треугольника по заданным данным,выберите способ счета:" << endl << "Введите 1 если хотите посчитать площадь через длины сторон" << endl<<"Введите 2 если хотите посчитать площадь через координаты вершин"<<endl;
	cin >> sposob;
	if (sposob == 1) {
		cout << "Введите длины сторон в каждой отдельной строке a b c" << endl;
		int a, b, c, p, s;
		cin >> a;cin >> b;cin >> c;
		if ((a + b) < c) cout << "Треугольник не может быть создан" << endl;
		else
		if ((a + c) < b) cout << "Треугольник не может быть создан" << endl;
		else
		if ((b + c) < a) cout << "Треугольник не может быть создан" << endl;
		else {
			p = (a + b + c) / 2;
			s = sqrt(p * ((p - a) * (p - b) * (p - c)));
			cout << "Площадь треугольника = " << s << endl;
		}
	}
	if (sposob == 2) {
		int x1, x2, x3, y1, y2, y3; double xy1, xy2, xy3, p, s;
		cout << "Введите координаты вершин треугольника через пробел в каждой отдельной строке x y" << endl;
		cout << "Введите первую пару координат" << endl;
		cin >> x1 >> y1;
		cout << "Введите вторую пару координат" << endl;
		cin >> x2 >> y2;
		cout << "Введите третью пару координат" << endl;
		cin >> x3 >> y3;
		xy1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		xy2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		xy3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		if ((xy1 + xy2) < xy3) cout << "Треугольник не может быть создан" << endl;
		else
			if ((xy2 + xy3) < xy1)cout << "Треугольник не может быть создан" << endl;
			else
				if ((xy3 + xy1) < xy2)cout << "Треугольник не может быть создан" << endl;
				else {
					p = (xy1 + xy2 + xy3) / 2;
					s = sqrt(p * (p - xy1) * (p - xy2) * (p - xy3));
					cout << "Площадь треугольника s= " << s << endl;
				}
	}
	cout << "Продолжить?Введите 1 для продолжения,введите 2 для выхода." << endl; cin >> chk;
	}
}