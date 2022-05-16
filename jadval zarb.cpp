#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
            cout<<i*j<<"\t";
            cout<<"\n";
    }
    cout<<"\n\n\n\n\n\n\n";
    return 0;
}