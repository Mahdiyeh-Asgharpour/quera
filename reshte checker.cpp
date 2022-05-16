#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, a , f , l;
    cin >> s >> a;
    int n = 0, q = 0;
    q = s.length();
    n = a.length();
    n=n-1;
    f = a[n];
    l = s[0];
    if( f == l ){
    cout << "YES";
  }
    else{
    cout << "NO";
  }
  return 0;    
    
}
