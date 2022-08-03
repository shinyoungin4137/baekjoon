#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	int step = 1,x=1,y=1,sum=1;
	if (n == 1) {
		cout << x << "/" << y << endl;
		return 0;
	}
	while (1) {
		step++;
		if (sum < n && n <=sum+step) {
			if (step % 2 == 0) {
				y = step;
				for (int i = 1; i < n - sum; i++) {
					x++;
					y--;
				}
				break;
			}
			else {
				x = step;
				for (int i = 1; i < n - sum; i++) {
					x--;
					y++;
				}
				break;
			}
		}
		sum += step;
	}
	cout << x << "/" << y << endl;
	return 0;
}