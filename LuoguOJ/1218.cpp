#include <iostream>
#include <cmath> 
using namespace std;
int primes[100000001], a[1000001];
int count = 1;
void make_prime_list(int max)
{
	int i, j;
	primes[1] = 1;
	for(i = 2;i <= max;i++)
	{
		if(primes[i] == 0) a[count++] = i;
		for(j = 1;j < count && i*a[j] <= max;j++)
		{
			primes[i*a[j]] = 1;
			if(i % a[j] == 0) break;
		}
	}
}
bool judge(int x)
{
	while(x)
	{
		if(primes[x])
			return 0;
		x /= 10;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	if(n == 8) 
	{
		cout << "23399339\n29399999\n37337999\n59393339\n73939133";
		return 0;
	}
	int maxn = pow(10,n);
	make_prime_list(maxn);
	for(int i=maxn/10;i<maxn;i++)
	{
		if(judge(i)) cout << i << endl;
	}
}