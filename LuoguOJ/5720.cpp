//P5720
#include <iostream>
using namespace std;
int main()
{
	long long len;
	int count = 1;
	cin >> len;
	while(len > 1)
	{
		count++;
		len >>= 1;
	}
	cout << count;
}
