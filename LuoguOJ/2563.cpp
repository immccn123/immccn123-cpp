#include <iostream>
#include <cstdio>
using namespace std;
int primes[201], a[201], f[201];
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
int main()
{
	make_prime_list(200);
	int n;
	f[0] = 1;
	for(int i = 1; i < count; i++)
    for(int j = a[i]; j <= 200; j++)
    f[j] += f[j-a[i]];
	while(cin >> n)
	{
		cout << f[n] << endl;
	} 
}