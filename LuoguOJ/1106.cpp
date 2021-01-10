#include <iostream>
using namespace std;
int main()
{
	string number;
	int k, l = 0;
	int max_n_in = 0;
	int midi = 0;
	cin >> number >> k;
	for(int o = 0;number[0] == '0';)
	{
		number.erase(0,1);
	}
	for(int i = 0;i < k;i++)
	{
		l = number.length();
		for(int j = 0;j < l;j++)
		{
			if(number[j]<number[j-1])
			{
				number.erase(j,1);
				break;
			} 
		}
	}
	for(int o = 0;number[0] == '0';)
	{
		number.erase(0,1);
	}
	if(number == "") number = "0";
	cout << number << endl;
	return 0;
}
