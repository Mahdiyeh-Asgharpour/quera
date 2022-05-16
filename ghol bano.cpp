#include<iostream>
#include<cstring>;
using namespace std;
int main()
{
	string q;
	cin>>q;
	int w;
	w=q.length();
	for(int i=w-1;i>=0;i--) 
	{
		string e[w];
		e[w-1]=q[i];
		cout<<e[w-1];
	}
	
}
