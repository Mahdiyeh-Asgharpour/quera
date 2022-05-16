#include<iostream>
using namespace std;
int main()
{
    int q, w;
    cin>>q>>w;
    if(q>w) 
    for(int i=1;i<=q;i++) cout<<"L";
    if(w>q)
    for(int i=1;i<=w;i++) cout<<"R";
    if(w==q) cout<<"Saal Noo Mobarak!";
}