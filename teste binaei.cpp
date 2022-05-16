#include<iostream>
using namespace std;
int main()
{
    int n, q;
    q=0;
    cin>>n;
    string a, z;
    cin>>a>>z;
    for(int i=0;i<n;i++)
        if(a.at(i) != z.at(i)) q++;
    cout<<q;
    return 0;
    
}