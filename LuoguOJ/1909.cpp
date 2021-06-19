#include <iostream>
using namespace std;
struct Pencil
{
    int size;
    int price;
} pencils[3];

int main()
{
    int n;
    int min = 0xc3c3c3;
    cin >> n;
    for(int i = 0;i < 3;i++) cin >> pencils[i].size >> pencils[i].price;
    for(int i = 0;i < 3;i++)
    {
        int tmp = n;
        int pr = 0;
        while(tmp > 0)
        {
            pr += pencils[i].price;
            tmp -= pencils[i].size;
        }
        if(pr < min) min = pr;
    }
    cout << min;
    return 0;
}