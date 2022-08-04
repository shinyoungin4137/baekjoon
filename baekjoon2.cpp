//2775
#include <iostream>
using namespace std;
int getNum(int, int);
int main() {
	int t, k, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << getNum(k, n) << "\n";
	}
	return 0;
}
int getNum(int k, int n) {
	if (k == 0) return n;
	if (n == 1) return n;
	return getNum(k, n - 1) + getNum(k - 1, n);
}
