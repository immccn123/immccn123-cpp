#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	int i = 0;
	while (i < a.length()) {
	if (a[i] >= 'a' && a[i] <= 'z') {
		a[i] = a[i] - ' ';
		}
	i++;
	}
	cout << a;
	return 0;
}