#include <bits/stdc++.h>
using namespace std;
int n;
string qianzhui, str[1000005]; 
int main(){
	cin>>n;
	for(int i = 1;i <= n;i++)
	   cin >> str[i];
	cin >> qianzhui;
	sort(str + 1, str + n + 1);
	for(int i = 1;i <= n;i++) if(str[i].find(qianzhui)==0)cout << str[i] <<endl;
	return 0;
}
