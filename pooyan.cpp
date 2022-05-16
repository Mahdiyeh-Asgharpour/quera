#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
     int p, d, s, w;
     cin>>p>>d;
     s=d%p;
     w=p/2;
     if (s<=w)
     {
         cout<<d;
     }
     else
     {
            while(s>w)
            {
         d+=d;
         s=d%p;
     }
     cout<<d;

     }

 }