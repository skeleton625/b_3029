#include <cstdio>
using namespace std;

int h1, m1, s1, h2, m2, s2, o,t;

int main() {
	scanf_s("%d:%d:%d",&h1,&m1,&s1);
	scanf_s("%d:%d:%d", &h2,&m2,&s2);
	o = h1 * 3600 + m1 * 60 + s1;
	t = h2 * 3600 + m2 * 60 + s2;
	if (o > t) t += 86400;
	t -= o;
	printf("%02d:%02d:%02d", t / 3600, (t%3600) / 60, t%60);
	return 0;
}