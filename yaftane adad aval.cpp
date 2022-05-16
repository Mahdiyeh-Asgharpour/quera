#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   long int b=0, t, w=n, s=1, q;
    
    while(n != 0)
    {
        t=n%10;
        b=b+t;
        n=n/10;
    } 
    
    int i=w;
    while(true)
    {
        i++;
        q=0;
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
                q++;
        }
        if(q==2 && s==b)
        {
       
            cout<<i<<endl;
    
            break;
        }
        else if(q==2)
        s++;

    }
     
    
    return 0;
}