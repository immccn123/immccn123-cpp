#include <iostream>
using namespace std;
int se(char a)
{
	if(a==' ')return 0;
	if(a >= 'a' && a <= 'z') return a - 'a' + 1;
	else return 27;
}
int main()
{
	int sed[28] = {1,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4,0};
	int tot = 0;
	string a;
	getline(cin,a);
	for(int i = 0;i < a.length();i++)
	{
		tot += sed[se(a[i])];
	}
	cout << tot;
	return 0;
}
