#include<iostream>
using namespace std;
void a(int n , int k);
int main()
{
    int n, k;
    cin>>n>>k;
    a(n,k);
    
    return 0;
}
void a(int n , int k)
{
    int i;
    int sum=0;
    for(i=k+1; ;i=k+i) 
    {
        sum=sum+1;
        if(i>n)
        {
             i=i-n;
            if(i==1) break;
        }
    }
    cout<<sum;
}