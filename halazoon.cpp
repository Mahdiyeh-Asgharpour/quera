#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int q;
    if(n%4==0)
    {
        q=n/4;
        cout<<-q<<" "<<q;
    }
    if(n%4==1)
    {
        q=n/4;
        cout<<-q<<" "<<-q;
    }
    if(n%4==2)
    {
        q=n/4;
        cout<<q+1<<" "<<-q;
    }
    if(n%4==3)
    {
        q=(n+1)/4;
        cout<<q<<" "<<q;
    }
 

}