#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "�����������" << endl;
	double a, b; char znak; int chk = 1;
	while (chk == 1) {
		cout << "������� ���� ���������" << endl;
		cin >> a >> znak >> b;
		switch (znak) {
		case '+': {cout << a + b; break; }
		case '-': {cout << a - b; break; }
		case '*': {cout << a * b; break; }
		case '/': {cout << a / b; break; }
		}
		cout << endl<<"����������?������� 1 ��� �����������,������� 2 ��� ������" << endl; cin >> chk;
	}
}