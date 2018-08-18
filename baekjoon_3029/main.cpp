#include <iostream>
using namespace std;

char a[9], b[9];
int ha[3], hb[3], h, m, s;
int i, j;
int main() {
	cin >> a >> b;
	for (; j < 3; i+=3,j++) {
		ha[j] = (a[i]-'0') * 10 + (a[i + 1]-'0');
		hb[j] = (b[i]-'0') * 10 + (b[i + 1]-'0');
	}
	s += hb[2] - ha[2];
	if (s < 0) {
		s += 60;
		m--;
	}
	m += hb[1] - ha[1];
	if (m < 0) {
		m += 60;
		h--;
	}
	h += hb[0] - ha[0];
	if (h < 0) {
		h += 24;
	}
	if (h == 0 && m == 0 && s == 0) cout << "24:00:00";
	else cout << h / 10 << h % 10 << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
	return 0;
}