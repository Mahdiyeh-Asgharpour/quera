#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j, sum=0, e, r;
    cin>>n>>m;
    int a[n+1][n+1];
    int s[m+1][2];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++) cin>>a[i][j];
    for(i=1;i<=m;i++)
        for(j=0;j<2;j++) cin>>s[i][j];
    for(i=1;i<=m;i++)
    {
        e=s[i][0];
        r=s[i][1];
        sum=sum+a[e][r];
        
    }
    cout<<sum;
    
}