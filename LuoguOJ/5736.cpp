#include <iostream>
#include <cmath>
using namespace std;
// int pr[100];
bool isprime(int x)
{
	if(x<=1) return false;
	for(int i=2;i<=sqrt(x);i++) if(x%i==0) return false;
	return true;
}
int main()
{
	int n;
	cin >> n;
	int tmp;
	for(int i = 0;i < n;i++)
	{
		cin >> tmp;
		if(isprime(tmp)) cout << tmp << ' ';
	}
	return 0;
}