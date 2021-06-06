//使用函数方法的求阶乘
#include <iostream>
using namespace std;
typedef long long ll;
// long long list[13] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
long long factorial(ll a)
{
	ll total = 1;
	// 冗余：if(a == 0) return 1;
	for(ll i = 1;i <= a;i++)
	{
		total *= i;
	}
	return total;
}
int main()
{
    int a;
    cin >> a;
    cout << factorial(a);
    return 0;
}