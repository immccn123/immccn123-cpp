#include <iostream>
using namespace std;
int fa(int a)
{
	int total = 1;
	if(a == 0) return 1;
	for(int i = 1;i <= a;i++)
	{
		total *= i;
	}
	return total;
}
char str[9];
bool chk[10] = {false};
int main()
{
	int n;
	int tmp = 0;
	int sum = 1;
	cin >> n >> str;
	for(int i = 0;i < n;i++)
	{
		tmp = 0;
		for(int j = i+1;j <= n;j++)
		{
			if(str[j-1] < str[i-1])
			{
				tmp++;
			}
		}
		sum += fa(n - i)*tmp;
		// chk[str[i - 1] - '0'] == true;
	}
	cout << sum;
	return 0;
}