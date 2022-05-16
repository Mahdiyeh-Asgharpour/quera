#include<iostream>
using namespace std;
int main()
{
    int t, s[100], a[100];
    cin>>t;
    for(int i=1;i<=t;i++)
    cin>>s[i]>>a[i]; 
    for (int i=1;i<=t;i++)
    {
        if(s[i]%2==0 && (s[i]==a[i]  || s[i]==a[i]+2))
            cout<<s[i]+a[i]<<endl;
        else   if(s[i]%2==1 && (s[i]==a[i] ||  s[i]==a[i]+2))
                    cout<<s[i]+a[i]-1<<endl;
                else
                    cout<<-1<<endl;
    }
}