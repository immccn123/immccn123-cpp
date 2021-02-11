#include <iostream>
using namespace std;
int main(){
	double k, sn;
	double i = 1.00000;
	cin >> k;
	while (sn <= k){
		sn = sn + (1 / i);
		i = i + 1;
	}
	cout << i - 1;
	return 0;
}
