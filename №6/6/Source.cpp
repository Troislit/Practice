#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "��������� ���������� ����� ����������� ���������" << endl;
	double a, b, c, x1, x2, x;int chk = 1;
	while(chk==1){
	cout << "������� ���������� a b c" << endl;
	cin >> a >> b >> c;
	if ((a == 0)&&(b == 0)&&(c == 0))cout << "x=����� �����" << endl;
	else {
		if ((a == 0) && (b == 0) && (c != 0))cout << "������ �� ����� ����� ����������� � OX" << endl;
		else {
			if ((b * b - 4 * a * c) < 0) cout << "��������� �� ����� �������������� ������" << endl;
			else {
				if (a == 0) { x = -c / b; cout << "������ ��������� " << endl << "x= " << x << endl; }
				else {
					x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
					x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
					cout << "����� ����������� ��������� " << "x1= " << x1 << endl; cout << "x2= " << x2 << endl;
				}
			}
		}
	}
	cout << "����������?������� 1 ����� ����������,��� 2 ����� ���������:" << endl; cin >> chk;
	}
}