#include <iostream>
using namespace std;
int main()
{
	int st, ed;
	int tmp;
	int count = 0;
	cin >> st >> ed;
	for(int a = st;a <= ed;a++)
	{
		tmp = a;
		if(tmp / 10000 == 2) count++;
		tmp = a % 10000;
		if(tmp / 1000 == 2) count++;
		tmp = a % 1000;
		if(tmp / 100 == 2) count++;
		tmp = a % 100; 
		if(tmp / 10 == 2) count++;
		if(a % 10 == 2) count++;
	}
	cout << count;
	return 0;
}
