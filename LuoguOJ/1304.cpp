#include <iostream>
using namespace std;
int primes[10001], a[10001];
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
	int n;
	cin >> n;
	make_prime_list(n);
	for(int i = 4; i <= n; i += 2)
	{
	    for(int j = 2; j < n; j++)
	    {
	        if(primes[j] == 0 && primes[i-j] == 0)
	        {
		        cout << i << '=' << j << '+' << i-j << endl;
		        break;
	        }
	    }
	}
	return 0;
}