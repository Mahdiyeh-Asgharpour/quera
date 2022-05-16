#include<iostream>
#include<string>
 using namespace std;
 string finding(string q,string w[2000],int n);
int main()
{
    int m,n;
    cin>>n>>m;
    string w[n*2],a[m],ans=" ",temp;
    for (int i = 0; i < (2*n); i++) cin>>w[i];
    for (int j = 0; j < m; j++) cin>>a[j];
    for (size_t p = 0; p < m; p++) temp.append(finding(a[p],w,n));
    cout<<temp;
    

}
 string finding(string q,string w[2000],int n)
{
    for (size_t t=0; t<n*2; t+=2)
        if (q==w[t]) return w[t+1]+" kachal! ";
    return "kachal! ";
    
}