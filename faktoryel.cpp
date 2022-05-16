#include<iostream>
using namespace std;
int main()
{
    int n, sum;
    cin>>n;

   
        sum=n*(n--);
        while(n>1)
    {
        n--;
        sum=sum*n;
    }
    cout<<sum;

    return 0;
}