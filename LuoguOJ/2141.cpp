#include <iostream>
using namespace std;
int numbers[101], b[101], ans;
int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) 
    {
        cin >> numbers[i];
        b[i] = 2;
    }
    
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            for(int k = 0;k < n;k++)
            {
                if(numbers[k] == numbers[i] + numbers[j] && b[k] != 1)
                {
                    ans++;
                    b[k] = 1;
                }
            }
        }
    }
    cout << ans;
}