#include<iostream>
using namespace std;
void s(int a, int b, int c);
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    s(a, b, c);
    return 0;
}
void s(int a, int b, int c)
{
    if(a==0 || b==0 || c==0)
    {
        cout<<"No";
        return;
    }
    if(a+b+c==180)
    {
        cout<<"Yes";
        return;
    }
    else
    {
        cout<<"No";
        return;

    }
}
