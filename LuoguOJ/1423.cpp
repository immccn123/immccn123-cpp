#include <iostream>
using namespace std;
int main()
{
	long double a;
    long double tmp = 2;
    long double total = 0;
    cin >> a;
    int count = 0;
    for(;total <= a;count++)
    {
        total += tmp;
        tmp = tmp / 100 * 98;
    }
    cout << count;
    return 0;
}
