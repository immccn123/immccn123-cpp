#include <iostream>
using namespace std;
int main()
{
	int n;
	int num = 1;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		for(int j = i;j < n;j++)
		{
			if(num > 0 && num < 10) cout << 0;
			cout << num;
			num++;
		}
		cout << endl;
	}
	return 0;
}
