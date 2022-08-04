//10250
#include <iostream>
using namespace std;
void showData(int, int, int);
int main() {
	int t, h, w, n,cnt=0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		showData(h, w, n);
	}
	return 0;
}
void showData(int h, int w, int n) {
	int cnt = 0;
	for (int j = 0; j < w; j++)
		for (int k = 0; k < h; k++) {
			if (++cnt == n)
				cout << (k + 1) * 100 + j + 1 << endl;
		}//위로부터 올라감

}
