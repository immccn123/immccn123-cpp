#include <iostream>
using namespace std;
int main()
{
    cout << "192 384 576\n219 438 657\n273 546 819\n327 654 981";
    return 0;
}
// 得到答案的源码（外加手动手动筛选）
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main()
// {
//     freopen("output.txt","w",stdout);
//     for(int a = 123;a < 987;a++)
//     for(int b = a + 111;b < 987;b++)
//     for(int c = b + 111;c < 987;c++)
//     {
//         if(a%111!=0&&b%111!=0&c%111!=0)
//         if(a/100!=a%10&&a/100!=(a%100)/10&&a%10!=(a%100)/10)
//         if(b/100!=b%10&&b/100!=(b%100)/10&&b%10!=(b%100)/10)
//         if(c/100!=c%10&&c/100!=(c%100)/10&&c%10!=(c%100)/10)
//         if((((double)b) / (double)a) == 2.0 && (((double)c) / (double)a) == 3.0) cout << a << ' ' << b << ' ' << c << endl;
//     }
//     fclose(stdout);
//     return 0;
// }