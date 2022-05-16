#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{

    char arr[20];
    int a[5],q=0;

for (int i = 0; i < 5; i++)
{
    cin>>arr;
    if (strstr(arr,"MOLANA")!=NULL || strstr(arr,"HAFEZ")!=NULL) a[i]=1;
    else a[i]=0;
}
for (int j = 0; j <5 ; j++)
{
    if (a[j]==1) cout<<j+1<<"\t";
    else q++;  
}
if (q==5) cout<<"NOT FOUND!";
}