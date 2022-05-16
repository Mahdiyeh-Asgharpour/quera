#include<iostream>
using namespace std;
void a(int n, int x, int y);
int main()
{
    int n, x, y;
    cin>>n>>x>>y;
    a(n, x, y);
    return 0;
}
void a(int n, int x, int y)
{
    int q=n/x+1;
    for(int i=0;i<q;i++)
        if(n-i*x==((n-i*x)/y)*y)
            cout<<i<<" "<<(n-i*x)/y<<endl;
    cout<<-1<<endl;
}
