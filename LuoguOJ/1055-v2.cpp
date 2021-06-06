#pragma message("Code by immccn123, on LuoguOJ.")
//#pragma warning(error:4)
#include <iostream>
#include <cstdio>
using namespace std;
int a[10];
int main()
{
	char ch;
	int index = -1;
	for(int i = 0;i < 13;i++)
	{
		ch = getchar();
		if(ch == '-') continue;
		index++;
		if(ch == 'X')
		{
			a[index] = 10;
			continue;
		}
		a[index] = ch - '0';
	}
	// for(int i = 0;i < 10;i++) cout << a[i];
	int md = (a[0]*1+a[1]*2+a[2]*3+a[3]*4+a[4]*5+a[5]*6+a[6]*7+a[7]*8+a[8]*9)%11;
	if(md==a[9])
	{
		cout << "Right";
		return 0;
	}
	else
	{
		cout<<a[0]<<'-'<<a[1]<<a[2]<<a[3]<<'-'<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<'-';
		if(md == 10)
		{
			cout<<"X";
		}
		else 
		{
			cout<<md;
		}
	}
	return 0;
} 