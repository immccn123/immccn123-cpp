#include<iostream>
using namespace std;
int main() {
	unsigned long long n, djx;
	cin >> n;
	djx = 0;
	djx = (n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4);
	cout << djx;
	return 0;
}
