#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
     int n,w=0,e=1;
     cin>>n;
     string q[2*n];
     string a[n];
     for (int i = 0; i < 2*n; i++)
     {
         cin>>q[i];
         if (i==0) a[i]=q[i];
        else if (i%2==0) a[i/2]=q[i];            
     }

     for (int j = 0; j < n; j++)
     {
         for (int t = 0; t < n; t++)
         {
             if (a[j]==a[t]) w++;    
         }
         if (w>e) e=w;
         w=0 ;      
     }
     cout<<e;
     
 }