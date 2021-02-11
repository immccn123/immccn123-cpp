#include <iostream>
using namespace std;
int main()
{
    long long ls = 1, r, mid, n, a;
        cin >> n;
        r = n;
        while(ls < r){
            mid=( ls +r)/2;
            if(mid*(mid+1)/2<n) ls =mid+1;
            else r=mid;
        }
        a = n - ls * ( ls - 1) / 2;
        if( ls % 2 == 0)cout << a << '/' <<  ls +1-a;
        else cout <<  ls + 1 - a << '/' << a;
        return 0;
}