#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Игра-Угадай число" << endl << "Программа загадала число от 0 до 100(включительно),у Вас есть 5 попыток" << endl;
	int b, ad, chk;
    chk = 1;
	while (chk == 1) {
		cout << "Введите предпологаемое Вами число" << endl;
		int a = rand() % 101;
		cin >> b;
		for (int i=0; b != a; i++) {
			if (i > 3) { cout << "Вы проиграли,загаданное число= " << a << endl; break; }
			else {
				if (b > a) { cout << "Загаданное число меньше" << endl; cin >> b; }
				if (b < a) { cout << "Загаданное число больше" << endl; cin >> b; }
			}
		}
		if (b == a)cout << "Поздравляем!Вы выйграли!" << endl << endl;
		cout << "Вы хотите сыграть еще? " << endl << "Введите   1   чтобы сыграть еще раз,или введите    2    чтобы выйти из игры." << endl;
		cin >> ad;
		while (ad != 1 && ad != 2) { cout << "Вы ввели неопознанное число попробуйте снова" << endl; cin >> ad; }
		if (ad == 1)chk = 1;
		if (ad == 2)chk = 2;
	}
}