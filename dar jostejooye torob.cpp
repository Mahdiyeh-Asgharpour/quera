#include<iostream>
using namespace std;
int main()
{
    int q, w, e, r;
    cin>>q>>w>>e>>r;
    if(w<r) 
    {
        cout<<"BORO BORO";
        return 0;
    }
    else if(w==r)
    {
        cout<<"WAIT WAIT";
        return 0;
    }
    else if(w>r) 
    {
        cout<<"SEE YOU";
        return 0;
    }
}