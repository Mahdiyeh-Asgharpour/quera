#include<iostream>
using namespace std;
void a(int x1, int y1, int x2, int y2);
int main()
{
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    a(x1, y1, x2, y2);
    return 0;

}
void a(int x1, int y1, int x2, int y2)
{
    if(x1==x2) 
{
    cout<<"Vertical";
    return;
}
    if(y1==y2) 
    {
        cout<<"Horizontal";
        return;
    }
    else cout<<"Try again";
}