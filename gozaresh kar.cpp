#include<iostream>
using namespace std;
int main()
{
    int n, k, c;
    cin>>n>>k;
    int sum=0;
    for(int i=1;i<=n;i++) 
    {
        cin>>c;
        sum=sum+c;

    }
    if(sum>=k) cout<<"YES";
    else cout<<"NO";

}