#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i;
	if(n%2)
	{
		cout << -1;
		return 0;
	}
	while(true)
	{
		if(n <= 0) break;
		i = 1;
		while(1)
		{
			if(pow(2,i+1) > n) break;
			i++;
		}
		n -= pow(2,i);
		printf("%d ",(int)pow(2,i));
	}
	return 0;
}