#include <iostream>
using namespace std;

int oddChecker(int x);

int main() {

	int n, m, i, j,switcher;
	cin >> n >> m;
	// n : rows
	// m : columns

	switcher = m;

	for (i = 1; i <= n; i++) { // Rows

		if (oddChecker(i)) {
			for (j = 1; j <= m; j++) { // # Columns
				cout << "#";
			}

			cout << endl;
		}
		else {

			if (!(oddChecker(i))) {
				for (j = 1; j <= m; j++) { // . Columns

					if (j == switcher) {
						cout << "#";
					}
					else {
						cout << ".";
					}
				}

				cout << endl;

				if (switcher == 1)
					switcher = m;
				else
					switcher = 1;

			}

		}

	}
	return 0;
}

int oddChecker(int x) {
	if (x % 2 != 0) {
		return 1;
	}
	return 0;
}
