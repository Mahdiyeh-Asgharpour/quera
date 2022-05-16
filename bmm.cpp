#include <iostream>
using namespace std;
long long int  s(long long int a, long long int b);
int main()
{

  long long int a, b, w;
  cin>>a;
  cin>>b;
 w= s(a,b);
  cout << w << endl;
}
long long int s(long long int a, long long int b)
{
  long long int  temp, w;

  while(b != 0)
    {
    temp = a%b;
    a = b;
    b = temp;
  }
  
  return a;
  

}