/*
	Name: P1028
	Copyright: __
	Author: immccn123
	Date: 15/11/20 15:44
	Description: __
*/
#include<iostream>
using namespace std;
int n;
int a[1001];
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i / 2;j++){
            a[i] = a[i] + a[j]; 
        }
        a[i]++;
    }
    cout << a[n];
    return 0;
}
