#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int data[100002] = {0};
int st[100002][50] = {0};
int logg[100002] = {-1};
int main()
{
	freopen("3865.in","r",stdin);
	int n, m;
	scanf("%d%d",&m,&n);
	for(int i = 1;i <= n;i++)
	{
		scanf("%d",&data[i]);
		st[i][0] = data[i];
		logg[i] = logg[i / 2] + 1;
	}
	for(int i = 1;i <= logg[n];i++)
	for(int j = 1;j + (1 << i) - 1 <= n;j++)
	{
		st[j][i] = max(st[j][i - 1],st[j + (1 << (i - 1))][i - 1]);
	}
	int l = 0, r = 0;
	while(m--)
    {
        scanf("%d%d",&l,&r);
        int len = logg[r - l + 1];
        printf("%d\n",max(st[l][len], st[r - (1 << (len)) + 1][len]));
    }
}
