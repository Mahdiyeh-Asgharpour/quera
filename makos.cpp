#include<iostream>
using namespace std;
int main()
{
    int n, a, k=0, t;
    cin>>n;
     t=n;
    while(n>0)
    {
        a=n%10;
        k=k*10+a;
        n=n/10;
    }
    if (k==t) cout<<"YES";
    else cout<<"NO";
    return 0;

}