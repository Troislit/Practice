#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "����-������ �����" << endl << "��������� �������� ����� �� 0 �� 100(������������),� ��� ���� 5 �������" << endl;
	int b, ad, chk;
    chk = 1;
	while (chk == 1) {
		cout << "������� �������������� ���� �����" << endl;
		int a = rand() % 101;
		cin >> b;
		for (int i=0; b != a; i++) {
			if (i > 3) { cout << "�� ���������,���������� �����= " << a << endl; break; }
			else {
				if (b > a) { cout << "���������� ����� ������" << endl; cin >> b; }
				if (b < a) { cout << "���������� ����� ������" << endl; cin >> b; }
			}
		}
		if (b == a)cout << "�����������!�� ��������!" << endl << endl;
		cout << "�� ������ ������� ���? " << endl << "�������   1   ����� ������� ��� ���,��� �������    2    ����� ����� �� ����." << endl;
		cin >> ad;
		while (ad != 1 && ad != 2) { cout << "�� ����� ������������ ����� ���������� �����" << endl; cin >> ad; }
		if (ad == 1)chk = 1;
		if (ad == 2)chk = 2;
	}
}