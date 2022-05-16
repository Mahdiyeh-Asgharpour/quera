#include<iostream>
using namespace std;
int main()
{
    float n, k, s;
    cin>>n>>k>>s;
    float q;
    q=n*k;
    if(q<=s) cout<<"Kafie!";
    if (q>s) cout<<"Na! yeki bayad bere sabzi bekhare";
}