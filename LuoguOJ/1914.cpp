#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
	int i = 0,n,xb;
	string a,outp, b = " abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	cin >> xb >> a;
	while (i < a.length()){
		outp += b[a[i]-96+xb];
		i++;
	}
	cout << outp;
}
