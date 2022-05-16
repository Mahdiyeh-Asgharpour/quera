#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float n;
    int  k, a, b;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        n=n/2;
    cout<<floor(n);
    return 0;
}