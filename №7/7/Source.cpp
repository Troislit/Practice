#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int sposob,chk;
	chk = 1;
	while(chk==1){
	cout << "������ ��������� ��������� ������� ������������ �� �������� ������,�������� ������ �����:" << endl << "������� 1 ���� ������ ��������� ������� ����� ����� ������" << endl<<"������� 2 ���� ������ ��������� ������� ����� ���������� ������"<<endl;
	cin >> sposob;
	if (sposob == 1) {
		cout << "������� ����� ������ � ������ ��������� ������ a b c" << endl;
		int a, b, c, p, s;
		cin >> a;cin >> b;cin >> c;
		if ((a + b) < c) cout << "����������� �� ����� ���� ������" << endl;
		else
		if ((a + c) < b) cout << "����������� �� ����� ���� ������" << endl;
		else
		if ((b + c) < a) cout << "����������� �� ����� ���� ������" << endl;
		else {
			p = (a + b + c) / 2;
			s = sqrt(p * ((p - a) * (p - b) * (p - c)));
			cout << "������� ������������ = " << s << endl;
		}
	}
	if (sposob == 2) {
		int x1, x2, x3, y1, y2, y3; double xy1, xy2, xy3, p, s;
		cout << "������� ���������� ������ ������������ ����� ������ � ������ ��������� ������ x y" << endl;
		cout << "������� ������ ���� ���������" << endl;
		cin >> x1 >> y1;
		cout << "������� ������ ���� ���������" << endl;
		cin >> x2 >> y2;
		cout << "������� ������ ���� ���������" << endl;
		cin >> x3 >> y3;
		xy1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		xy2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		xy3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		if ((xy1 + xy2) < xy3) cout << "����������� �� ����� ���� ������" << endl;
		else
			if ((xy2 + xy3) < xy1)cout << "����������� �� ����� ���� ������" << endl;
			else
				if ((xy3 + xy1) < xy2)cout << "����������� �� ����� ���� ������" << endl;
				else {
					p = (xy1 + xy2 + xy3) / 2;
					s = sqrt(p * (p - xy1) * (p - xy2) * (p - xy3));
					cout << "������� ������������ s= " << s << endl;
				}
	}
	cout << "����������?������� 1 ��� �����������,������� 2 ��� ������." << endl; cin >> chk;
	}
}