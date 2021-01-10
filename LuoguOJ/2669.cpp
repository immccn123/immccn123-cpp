#include <iostream>
using namespace std;
int main(){
	long long k, n, i, m = 0,j;
	cin >> k;
	for(i = 1;k-i>=0;k-=i++){
		m+=i*i;
	}
	cout << m + i*k;
	return 0;
}
