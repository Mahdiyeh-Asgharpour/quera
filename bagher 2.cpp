#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
     int n, d, q, w, e;
     cin>>n>>d;

     int a=0, s=0;
     for (size_t  i=0;i<n;i++)
    {
         cin>>q>>w>>e;
         s+=q-a;
         a=q;
         while(s%(w+e)<w)
        {
             ++s;
        }
    }
     s+=d-a;
     a=d;
     cout<<s;
     
 }