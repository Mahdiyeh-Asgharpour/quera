#include<iostream>
#include<math.h>
using namespace std;
void aval(int a, int b);
int main()
{
    int a, b;
    cin>>a>>b;
    aval(a, b);
    return 0;
}
void aval(int a, int b)
{  
    int q;
    bool n=false;
    for(int i=a+1;i<b;i++) 
    {
        q=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0) 
            {
                q=0;
                break;
            }
        }
        if(q==1)
            if(n)
                cout<<","<<i;
        else
        {
            cout<<i;
            n=true;
        }
    }
}