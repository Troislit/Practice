#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������ ��������� �������� 2 ���������� ���� ����� �������" << endl;
	double a, b,c;
	cout << "������� ������ �����" << endl;cin >> a;
	cout << "������� ������ �����" << endl;cin >> b;
	cout << "����������� �����" << endl; cout << a << "  " << b << endl;
	c = b;b = a;a = c;
	cout << "����� ���������� �������" << endl; cout << a << "  "<< b << endl;
}