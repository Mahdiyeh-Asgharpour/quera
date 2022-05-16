#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c, w;
	cin>>a>>b>>c;
	w=(b*b)-(4*a*c);
	while (w == 0)
	{
		float q;
		q=-(b/(2*a));
		cout.precision(3);
		cout<<fixed<<q<<endl;
	}
	while (sqrt(w) < 0)
	{
		cout<<"IMPOSSBLE";
	}
	if(sqrt(w)>0)
	{
		float x, y;
		x=(-b+sqrt(w))/(2*a);
		y=(-b-sqrt(w))/(2*a);
		cout.precision(3);
		cout<<fixed<<y<<endl;
		cout.precision(3);
		cout<<fixed<<x<<endl;
			
		
	}
	
}
