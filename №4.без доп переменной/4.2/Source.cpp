#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "������� 2 ����� ����� ������" << endl;
	cin >> a >> b;
	cout << "����������� �����   " << a <<"   "<< b << endl;
	a = b * a;
	b = a / b;
	a = a / b;
	cout << "���������� �����   " << a <<"   "<< b << endl;
}
