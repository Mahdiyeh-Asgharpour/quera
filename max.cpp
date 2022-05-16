#include<iostream>
using namespace std;
int main()
{
    int n, i, a, temp=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>temp) temp=a; 
    }

cout<<temp; 
   
return 0;
}