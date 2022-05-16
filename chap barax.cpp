#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int i;
    for(i=0;i<1000;i++)
    {
        cin>>a[i];
        if(a[i]==0) break;
        
    }
    
    for(int j=i-1;j>=0;j--) cout<<a[j]<<endl;
    return 0;
}