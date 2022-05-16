#include<iostream>
using namespace std;
int tedad(int n);
int jam(int n);
int main()
{
    int n;
    cin>>n;
    tedad(n);
    jam(n);
    return 0;
}
int tedad(int n)
{
    int temp=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++) 
            if(i%j==0)  temp=temp+1; 
            cout<<temp<<" ";
            return 0;
}
int jam(int n)
{
    int sum=0, q;
    for(int k=1;k<=n;k++) 
    {
        for(q=1;q<=k;q++) 
            if(k%q==0) sum=sum+q;
    }
    cout<<sum;
    return 0;
}
