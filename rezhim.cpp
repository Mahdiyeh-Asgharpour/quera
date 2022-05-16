#include<iostream>
using namespace std;
int main()
{
    char n[5];
    cin>>n;
    char a;
    int  Y=0, R=0, G=0;
    for(int i=0;i<=4;i++)
    {   a=n[i];
        if(a=='Y')
            Y++;
        else if(a=='R')
            R++;
        else if(a=='G')
            G++;
    }
    if(R>=3 ||R>=2 && Y>=2 || R==1 && Y==4 || R==5 ||Y==5 ) 
    {
        cout<<"nakhor lite";
        return 0;
    }
    else cout<<"rahat baash";
    return 0;

}