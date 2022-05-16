#include<iostream>
using namespace std;
int main()
{
    long int n, sum, t;
    cin>>n;
    while(n>=10) {
         sum=0;
    while (n > 0)
    {
        t=n%10;
        sum=sum+t;
        n=n/10;
    }
    n=sum;
    }
    
    cout<<n;
    return 0;
}