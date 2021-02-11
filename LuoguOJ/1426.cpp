#include <iostream>
using namespace std;
int main()
{
    double spd = 7, s, x, route = 0.0;
    cin >> s >> x;
    while(route < s - x){
        route += spd;
        spd *= 0.98;
    }
    if(spd * 0.98 <= s + x - route) cout << 'y';
    else cout << 'n';
    return 0;
}