#include <iostream>
using namespace std;
long long a[100010];
long long pow(long long a,long long b)
{
	long long sum = 1;
	for(long long i = 0;i < b;i++)
	{
		sum = sum * a;
	}
	return sum;
} 
int main(){
	int nums = 0, ls = 0;
	while(cin >> a[ls++],a[ls] != 0);
	long long sum = 0;
	for(int i = 0;i < nums;i++) sum += a[i];
	long long out;
	out = pow(2,nums-1) * sum;
	cout << out << endl;
	return 0;
}
