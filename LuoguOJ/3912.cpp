//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <string.h>
bool flag[100000001];
//bool isSh(int n)
//{
//	if(n < 2) return false;
//	for(int i = 2;i * i <= n;i++) if(flag[i]) if(n%i == 0) return 0;
//	return true;
//}
int main()
{
	memset(flag, false, sizeof(flag));
	int n;
	scanf("%d",&n);
	int count = n - 1;
	for(int i = 2;i * i <= n;i++)
	{
		if(!flag[i])
		{
			for(int j = 2; i * j <= n; j++)
				if (!flag[i * j])
				{
					flag[i * j] = true;
					count--;
				}
		}
	} 
	printf("%d",count);
	return 0;
}