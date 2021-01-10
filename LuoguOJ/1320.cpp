/*
	P1320
	luogu
	

*/
#include <iostream>
#include <cstdio>
using namespace std;
int anw[400000];
int main()
{
	freopen("1320.txt","r",stdin);
	int n;
	char ch = '!';
	bool is_n_end = false;
	char now_char = '!';
	int lsanw = 0;
	bool isf = true;
	int i = 0;
	while(cin.get(ch))
	{
		if(isf)
		{
			now_char = ch;
			isf = false;
		}
		if(ch == '\r' || ch == '\n')
		{
			is_n_end = true;
			continue;
		}
		if(!is_n_end) n++;
		if(now_char != ch)
		{
			now_char = ch;
			anw[i] = lsanw;
			lsanw = 1;
			i++;
		}
		else lsanw++;
		//cout << ch << "============" << lsanw << "________________" << endl;
	}
	cout << n << ' ';
	for(i-=1,n = 0;n < i;n++) cout << anw[n] << ' ';
}
