#include <iostream>
using namespace std;
void hanoi(int, int, int, int);

int main() {
	int n, cnt = 0;
	cin >> n;
	//hanoi(n)=2*hanoi(n-1)+1
	cout << (1 << n) - 1 << "\n";
	hanoi(n, 1, 3, 2);
	return 0;
}
void hanoi(int n, int start, int to, int bypass) {
	if (n == 1)
		cout << start << " " << to << "\n";
	else {
		hanoi(n - 1, start,bypass,to);
		cout << start << " " << to<< "\n";
		hanoi(n - 1,bypass,to ,start);
	}
	}