#include<iostream>
using namespace std;
int main()
{
    int n, q, w=0;
    cin>>n;
    int arr[101];
    arr[0]=1;
    arr[1]=2;
    for(q=2;q<=100;q++) arr[q]=arr[q-1]+arr[q-2];
    for(q=1;q<=n;q++) 
    {
        if(q==arr[w]) 
        {
            cout<<"+";
            w++;
        }
        else cout<<"-";
    } 
    return 0;
}