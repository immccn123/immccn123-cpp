#include <iostream>
using namespace std;
int main()
{
    int kwh;
    cin >> kwh;
    double ans;
    if(kwh <= 150) ans =  (0.4463 * kwh);
    else if(kwh > 150 && kwh <= 400) ans =  (66.945 + (kwh - 150) * 0.4663);
    else ans =  (183.52 + (kwh - 400) * 0.5663);
    cout << (((int)(ans * 10 + 0.5)) / 10.0);
    return 0;
}