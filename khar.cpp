#include<iostream>
using namespace std;
int main()
{
    int a, b, l, z;
    cin>>a>>b>>l;
    if(l%2==0) z=l/2*(a+b);
    else z=(l-1)/2*(a+b)+a;
    cout<<z<<endl;
    return 0;
}