#include<iostream>
using namespace std;
void ShowFibNth(long int n, long int q);
int main()
{
    int n, q;
    cin>>n>>q;
    ShowFibNth(n, q);

    
}
void ShowFibNth(long int n, long int q)
{
    if(n==0) return;
    else 
    {
        cout<<n<<endl;
        int t=q-n;
        ShowFibNth(t,n);
    }

    
}