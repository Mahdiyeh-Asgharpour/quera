#include<iostream>
#include<string>

using namespace std;

int main(){

    short n,q;
    int temp=0;
    cin>>n>>q;
    char arr[n][q];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        for(int j =0;j<q;j++)
            if (arr[i][j]=='*') temp++;      
    }
    cout<<temp;
    
}