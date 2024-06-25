#include <iostream> <cmath>
using namespace std;

int main() {
	double delta, x, a, b, c;
	cout << "Nhap so a: "; cin >> a;
	cout << "Nhap so b: "; cin >> b;
	cout << "Nhap so c: "; cin >> c;
	if (a == 0) {
		if (b == 0) {
			if (c != 0) {
				cout << "Phuong trinh vo nghiem.";
			}
			else cout << "Phuong trinh vo so nghiem.";
		}
		else x = -c / b;
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "Phuong trinh vo nghiem.";
		}
		else if (delta >= 0) {
			cout << "x1 = " << (-b + (sqrt(delta)) / (2 * a));
			cout << "\nx2 = " << (-b - (sqrt(delta)) / (2 * a));
		}
		else cout << "Phuong trinh vo nghiem.";
	}
	return 0;
}