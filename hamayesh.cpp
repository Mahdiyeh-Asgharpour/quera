#include<iostream>
using namespace std;
void a(int q, int w);
int main()
{
    int q, w;
    cin>>q>>w;
    a(q, w);
}
void a(int q, int w)
{
    string e;
    e=w<=10 ? "Right" : "Left";
    q=(10-q)+1;
    w=e=="Right" ? w : (20-w)+1;
    cout<<e<<" "<<q<<" "<<w<<endl;
}