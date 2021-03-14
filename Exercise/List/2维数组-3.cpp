#include<iostream>
using namespace std;
int a[100][100];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    int n,x=1,y=1,i=1,j=0,z=1;
    cin>>n;
    while(i++<=n*n)
    {
        a[x][y]=z;
        if(a[x+dx[j]][y+dy[j]]||x+dx[j]>n||y+dy[j]<1||y+dy[j]>n)
        {
            j++;
            if(j==4)j=0,z++;            
        }
        x+=dx[j],y+=dy[j]; 
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}