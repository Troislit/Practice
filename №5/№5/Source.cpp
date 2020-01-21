#include<iostream>
using namespace std;
int main() {
	double g = -9.8;
	double x0, v0, t0;
	cin >> x0 >> v0 >> t0;
	cout << x0 + v0 * t0 + g * t0 * t0 / 2 << endl;
}
