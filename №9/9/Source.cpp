#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "����-������ �����" << endl << "��������� �������� ����� �� 0 �� 100(������������),� ��� ���� 5 �������" << endl;
	int b,ad,i;
	i = 0;
    again:
	cout << "������� �������������� ���� �����" << endl;
	int a = rand() % 101;
	cin >> b;
	for (; b != a; i++) {
 	 if (i >= 4) { cout << "�� ���������,���������� �����= " << a << endl; break; }
		else {if (b > a) { cout << "���������� ����� ������" << endl; cin >> b; }
			  if (b < a) { cout << "���������� ����� ������" << endl; cin >> b; }
				}
			}
		if (b == a)cout << "�����������!�� ��������!" << endl << endl;
		cout << "�� ������ ������� ���? " << endl << "�������   1   ����� ������� ��� ���,��� �������    2    ����� ����� �� ����." << endl;
	    end:
		cin >> ad;
		if (ad == 1)goto again;
		  else
			if (ad == 2)cout << "GG";
	        	else {cout << "�� ����� ������������ �����,���������� ��� ���" << endl; goto end;}
	}