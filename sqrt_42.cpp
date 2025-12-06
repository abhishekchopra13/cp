#include<bits/stdc++.h>

using namespace std;

int32_t main() {
	int target = 42;
	double guess = 1;
	const long double EPS = 1e-12;
	while (fabs(guess * guess - target) > EPS) {
		guess = 0.5 * (guess + target / guess);
	};
	cout << setprecision(10) << guess << endl;
}
