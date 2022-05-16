#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, q, sum=0, temp, w, e;
    cin>>a>>q;
    int z[a];
    temp=a*q;
    for(int i=0; i<a; i++)
    {
        cin>>z[i];
        sum=sum+z[i];
    }
    w=temp-sum;
    e=w/q;
    cout<<floor(e);
    return 0;
}