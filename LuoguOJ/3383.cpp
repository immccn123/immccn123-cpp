#include <stdio.h>
// using namespace std;
int primes[100000001], a[100000001];
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
	int ask_counts, maxn, tmp_ask_num;
	scanf("%d %d", &maxn, &ask_counts);
	make_prime_list(maxn);
	for(int i = 0;i < ask_counts;i++)
	{
		scanf("%d", &tmp_ask_num);
		printf("%d\n",a[tmp_ask_num]);
	}
	return 0;
}