#include<iostream>
using namespace std;
int main()
{
    int n, b, f, x, p;
    cin>>n;
    f=n;
    while (f>=10)
    {
        x=f%10;
        f=f-x;
        f=f/10;
        b+=x;
    }
    if(1<=f<10)
    {
        b+=f;
    }
    int i=0;  
    while(i==b)
    {
        p=n;
        p++;
        if(p%2!=0 || p%3!=0 || p%5!=0)
    {
            i++;
    }
    }
    cout<<p;
    return 0;




}