#include<iostream>
using namespace std;
int main()
{
    int shah, vazir, rokh, fil, asb, sarbaz;
    int q, w, e, r, t, y, u, i, o, p;
    cin>>shah>>vazir>>rokh>>fil>>asb>>sarbaz;
    if(shah>1) 
    {
        q=shah-1;
        cout<<-q<<" ";
    }
    else if(shah==1) cout<<0<<" ";
    else cout<<1<<" ";
    if(vazir>1) 
    {
        w=vazir-1;
        cout<<-w<<" ";
    }
    else if(vazir==1) cout<<0<<" ";
    else cout<<1<<" ";
    if(rokh>2) 
    {
        r=rokh-2;
        cout<<-r<<" ";
    }
    else if (rokh==2) cout<<0<<" ";
    else
    {
        e=2-rokh;
        cout<<e<<" ";
    }
    if(fil>2) 
    {
        t=fil-2;
        cout<<-t<<" ";
    }
    else if (fil==2) cout<<0<<" ";
    else
    {
        y=2-fil;
        cout<<y<<" ";
    }
    if(asb>2) 
    {
        u=asb-2;
        cout<<-u<<" ";
    }
    else if (asb==2) cout<<0<<" ";
    else
    {
        i=2-asb;
        cout<<i<<" ";
    }
    if(sarbaz>8) 
    {
        o=sarbaz-8;
        cout<<-o;
    }
    else if(sarbaz==8) cout<<0;
    else 
    {
        p=8-sarbaz;
        cout<<p;
    }



        
    
    
}