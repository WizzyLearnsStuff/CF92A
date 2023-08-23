#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int s = n * (n + 1) / 2;

	m = m % s;

	for (int i = 1; i <= n; i++) {
		if (m < i * (i + 1) / 2) {
			cout << m - i * (i - 1) / 2;
			return 0;
		}
	}

	// impossible!
	cout << 0;
}
