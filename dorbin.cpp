#include<iostream>
using namespace std;
void a(int q, int w, int e, int r, int t, int y);
int main()
{
    int q, w, e, r, t, y;
    cin>>q>>w>>e>>r>>t>>y;
    a(q, w, e, r, t, y);
    return 0;
}
void a(int q, int w, int e, int r, int t, int y)
{
    if(q==e) cout<<t<<" ";
    if(e==t) cout<<q<<" ";
    if(q==t) cout<<e<<" ";
    if(w==r) cout<<y;
    if(w==y) cout<<r;
    if(r==y) cout<<w;

}