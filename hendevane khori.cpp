#include <iostream>
using namespace std;
int main()
{
    int a[10000];
    int n,w=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int max=a[1];
    for(int j=2;j<=n;j++)
    {
        if(a[j]>max)
        {
           max=a[j];
           w=j;
        }

    }
    cout<<w;
    return 0;
}