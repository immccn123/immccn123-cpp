#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a;
	int i, ans = 0;
	getline(cin,a);
	for(i = 0;i < a.length();i++){
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z') || (a[i] <= '9' && a[i] >= '0')) ans++;
	}
	cout << ans;
	return 0;
}

