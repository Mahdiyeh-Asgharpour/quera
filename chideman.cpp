#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, sum=0, temp, q, w=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        sum=sum+a[i];    
    }
    temp=sum/n;
    
    for(int j=0;j<n;j++)
    {
        if(a[j]<temp) 
        {
            q=temp-a[j];
            w=w+q;
        }
        if(a[j]=temp) 
        {
            q=0;
            w=w+q;
        }
        if(a[j]>temp) 
        {
            break;
        }
        
       
    }
    cout<<w;
}