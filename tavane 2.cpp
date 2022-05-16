#include<iostream>
using namespace std;
int main()
{
    int n, s, i;
    cin>>n;
    s=2;
    for(i=0;i<=n;i++)
    {
        s=s*2;
        if(s>=n)
        {
        cout<<s;
        break;
        }
    }
    
    return 0;
    

}