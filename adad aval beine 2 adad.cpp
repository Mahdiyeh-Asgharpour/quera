#include<iostream>
using namespace std;
int main()
{   
    int a, b, q=0;
    cin>>a>>b;
    for (int i=a;i<=b;i++)
    {
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
            q++;
        }
        if(q==2)
            cout<<"\n"<<i<<endl;
            q=0;
    }
    return 0;
    }
