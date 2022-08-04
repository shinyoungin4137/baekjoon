//10870
#include <iostream>
using namespace std;
bool hansu(int);
int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		if (hansu(i+1)) cnt++;
	cout << cnt << "\n";
	return 0;
}
bool hansu(int i) {
	if (i / 100 != 0) {
		int q = i / 100, w = (i / 10) % 10, e = i % 10;
		if (q - w == w - e) return true;
	 return false;
	}
	return true;
}
	