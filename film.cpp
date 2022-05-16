#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >>n;
    cin.ignore(1,'\n');
    string q[n];
    for(int i=0;i<n;i++) getline(cin,q[i]);  
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<q[j].length();i++)
        {
          if(i==0 && char(q[j][0]) != ' ')
          {
              cout << char(toupper(q[j][0]));
          }
          if(q[j][i] == ' ')
          {
              cout << char(q[j][i]);
              cout << char(toupper(q[j][i+1]));
          }
          else if(q[j][i] != ' ' && q[j][i-1] == ' ')
          {
              cout << "";
          }
          else
          {
              if(i==0)
              {
                  cout << "";
              }
              else
              {
                  cout << char(tolower(q[j][i]));
              }
          }
      }
      cout<<endl;
  }
    
    return 0;
}