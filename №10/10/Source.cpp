#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "��������� �������� ����� � �������" << endl << "�������� � ����� ������ ����� ������ �����,� ����� ��� �������" << endl;
	int a, b,i,a1;
	i=0;
	cin >> a >> b;
	a1 = a;
		while (i < (b-1)) {a = a * a1;i=i+1;}
		cout << a;
}