#include<iostream>
using namespace std;
int main()
{
    int x, n;
    cin>>x>>n;
    if(n==0) {
        cout<<20;
        return 0;
    }
    if(n==7) 
    {
        cout<<x;
        return 0;
    }
    else for(int i=1;i<=n;i++)  x--;
    if(x<=0) cout<<0;
    else cout<<x;
    return 0;

}
