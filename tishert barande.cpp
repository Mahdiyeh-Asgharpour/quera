#include<iostream>
using namespace std;
int main()
{
    int q, w, e, r;
    cin>>q>>w>>e>>r;
    if(q>=e) 
    {
        if(w>=r) cout<<"yes";
        else cout<<"no";
    }
    else cout<<"no";
}