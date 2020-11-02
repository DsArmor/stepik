#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int b = 1, c = 0, d = 0, n, m, check,n1,m1;
	cin >> n >> m;
	int a[100][100];
	n1 = n;
	m1 = m;
	check = n * m / (n + m);
	check = 100;
	for (int j = 0; b<=(n1*m1); j++) {
		for (int i = j; i < m; i++) {
			a[j][i] = b;
			b++;
			if (b > (n1 * m1))
				break;
		}
		if (b > (n1 * m1))
			break;
		for (int i = j+1; i < n; i++) {
			a[i][m - 1] = b;
			b++;
			if (b > (n1* m1))
				break;
		}
		if (b > (n1* m1))
			break;
		for (int i = m - 2; i > c; i--) {
			a[n - 1][i] = b;
			b++;
			if (b > (n1* m1))
				break;
		}
		if (b > (n1* m1))
			break;
		for (int i = n - 1; i > d; i--) {
			a[i][j] = b;
			b++;
			if (b > (n1 * m1))
				break;
		}
		m--;
		n--;
		c++;
		d++;
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
}