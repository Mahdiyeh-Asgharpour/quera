#include<iostream>
#include<string>
using namespace std;
int main()
{
    int q, i, k;
    string n;
    char w[20];
    cin>>n;
    q=n.length();
    cout<<n<<endl;
    for(i=0;i<q;i++) w[i]=n[i];
    for(i=1;i<q;i++) 
    {
        for(k=0;k<i;k++) n[k]=w[i];
        cout<<n<<endl;
    }
    return 0;
}