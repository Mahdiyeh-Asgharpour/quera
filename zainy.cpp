#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j, sum=0;
    cin>>n>>m;
    int s[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>s[i][j];
        }
        for(i=1;i<n-1;i++)
            for(j=1;j<m-1;j++)
        {

            if(s[i-1][j]>s[i][j] && s[i+1][j]>s[i][j] && s[i][j-1]<s[i][j] && s[i][j+1]<s[i][j] ||s[i-1][j]<s[i][j] && s[i+1][j]<s[i][j] && s[i][j-1]>s[i][j] && s[i][j+1]>s[i][j] )
            {
                    sum=sum+1;
        

            } 
        }
        cout<<sum;
        return 0;   
}