#include<iostream>
using namespace std;
int main()
{
    int k, sum, i, temp;
    cin>>k;
    sum=0;
    temp=0;
    for(i=1;i<=k;i++)
    {   sum=sum+1;
        temp=temp+sum;
    
    }
    cout<<temp;
    return 0;

    
}