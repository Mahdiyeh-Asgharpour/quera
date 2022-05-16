#include <iostream>
using namespace std;
int main()
{
	int k,q=0;
	char s[300000],a[10];
	cin>>k;
	cin>>s;
	for(int i=0;i<k;i++)
	{
		cin>>a;
		for(int j=0;j<9;j++)
			if(a[j]==s[i])
			{
				if(j>4) q+=9-j;
				else q+=j;	
				break;
			}
	}
	cout<<q;
 	return 0;
}