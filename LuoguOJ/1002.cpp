#include <bits/stdc++.h>
unsigned long long lst[21][21];
using namespace std;
long long horsex, horsey, bx, by;
bool is_hp(int i,int j)
{
	if(i == horsex && j == horsey) return true;
	if(i == horsex+2 && j == horsey+1) return true;
	if(i == horsex+1 && j == horsey+2) return true;
	if(i == horsex-1 && j == horsey+2) return true;
	if(i == horsex-2 && j == horsey+1) return true;
	if(i == horsex-2 && j == horsey-1) return true;
	if(i == horsex-1 && j == horsey-2) return true;
	if(i == horsex+1 && j == horsey-2) return true;
	if(i == horsex+2 && j == horsey-1) return true;
	return false;
}
int main()
{
	cin >> bx >> by >> horsex >> horsey;
	for(int i = 0;i < 21 && !is_hp(i,0);i++) 
		lst[i][0] = 1;
	for(int i = 0;i < 21 && !is_hp(0,i);i++)
		lst[0][i] = 1;
	for(int i = 0;i <= bx;i++)
	{
		for(int j = 0;j <= by;j++)
		{
			if(is_hp(i,j)) continue;
			if(i == 0 || j == 0) continue;
			lst[i][j] = lst[i-1][j] + lst[i][j-1];
		}
	}
	cout << lst[bx][by];
	return 0;
}
