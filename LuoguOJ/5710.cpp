#include <bits/stdc++.h>
using namespace std;
int main(){
	bool xa = 0, xb = 0, xiaoa = 0, uim = 0, bw = 0, zm = 1;
	int a;
	cin >> a;
	if (a % 2 == 0) xa = 1;
	if (a > 4 && a <= 12) xb = 1;
	if (xa && xb) xiaoa = 1;
	if (xa || xb) uim = 1;
	if (xa ^ xb) bw = 1;
	if (xa || xb) zm = 0;
	printf("%d %d %d %d",xiaoa,uim,bw,zm);
}
