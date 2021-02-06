#include <iostream>
using namespace std;
int main()
{
    int money, jiao;
    cin >> money >> jiao;
    money = money * 10 + jiao;
    cout << (money / 19);
    return 0;
}