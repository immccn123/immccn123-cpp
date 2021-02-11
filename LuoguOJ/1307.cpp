#include <iostream>
//#include <cstring>
using namespace std;
int main()
{
	string a;
	bool lflag = false;
	int i = 0, j;
	cin >> a;
	if (a[0] == '-')
	{
		cout << '-';
		i = 1;
		lflag = true;
	}
	j = a.length() - 1;
	bool first = false;
	for(;j > i;j--,i++)
	{
		swap(a[i],a[j]);
	}
	//cout << a;
	if(lflag) a[0] = '0';
	if(a[0] == '0') first = true;
	for(i = 0;i < a.length();i++)
	{
		if(first && a[i] == '0') continue;
		else first = 0;
		cout << a[i];
	}
	return 0;
}
