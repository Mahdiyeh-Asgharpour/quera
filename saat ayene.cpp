#include<iostream>
using namespace std;
void s(int a, int b);
int main()
{
    int a, b;
    cin>>a>>b;
    s(a, b);
    return 0;

}
void s(int a, int b)
{
    int q, w;
    if(a==0 && b==0) 
    {
        cout<<"00:00";
        return;
    }
    if(a==0)
    {
        cout<<"00:";
        w=60-b;
        if(w<10) cout<<0<<w;
        else cout<<w;
        return;
        
    }
    if(b==0)
    {
        q=12-a;
        if(q<10) cout<<0<<q;
        else cout<<q;
        cout<<":00";
        return;

    }
    q=12-a;
    w=60-b;
    if(q<10) cout<<0<<q;
    else cout<<q;
    cout<<":";
    if(w<10) cout<<0<<w;
    else cout<<w;

}
