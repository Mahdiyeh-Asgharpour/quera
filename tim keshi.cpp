#include<iostream>
using namespace std;
int main()
{
    int q, w, e, r, t, y;
    cin>>q>>w>>e>>r>>t>>y;
    int sum=0;
    if(q>w) sum=sum+w;
    else sum=sum+q;
    if(e>r) sum=sum+r;
    else sum=sum+e;
    if(t>y) sum=sum+y;
    else sum=sum+t;
    cout<<sum;
    return 0;
    

}