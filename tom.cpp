#include<iostream>
using namespace std;
int main()
{
   int n, sum, i;
   cin>>n;
   sum=0;
   for(int i=1;i<n;i++)
   {
       if (n%i==0){
           sum=sum+i;
       }
   }
   if(sum==n){
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }
    return 0;
}