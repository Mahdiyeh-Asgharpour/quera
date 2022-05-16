#include<iostream>
using namespace std;
void s(int t);
int main()
{
    int t;
    cin>>t;
    s(t);
    return 0;

}
void s(int t)
{
    if(t>100) 
    {
        cout<<"Steam";
        return;
    }
    if(0<=t && t<=100) 
    {
        cout<<"Water";
        return;
    }
    if(t<0)
    {
        cout<<"Ice";
        return;
    }
}