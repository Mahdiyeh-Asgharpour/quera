#include<iostream>
#include<iomanip>
using namespace std;
void a(int q, int w, int e, int r);
void s(int q, int w, int e, int r);
int main()
{
    int q, w, e, r;
    cin>>q>>w>>e>>r;
    a(q, w, e, r);
    s(q, w, e, r);
    return 0;
}
void a(int q, int w, int e, int r)
{
    float sum;
    sum=q+w+e+r;
    cout<<"Sum : "<<setprecision(6)<<fixed<<sum<<endl;
    float average;
    average=sum/4;
    cout<<"Average : "<<setprecision(6)<<fixed<<average<<endl;
    float product;
    product=q*w*e*r;
    cout<<"Product : "<<setprecision(6)<<fixed<<product<<endl;
}
void s(int q, int w, int e, int r)
{
    float max;
    max=q;
    if(w>max) max=w;
    if(e>max) max=e;
    if(r>max) max=r;
    cout<<"MAX : "<<setprecision(6)<<fixed<<max<<endl;
    float min=10000;
    if(q<min) min=q;
    if(w<min) min=w;
    if(e<min) min=e;
    if(r<min) min=r;
    cout<<"MIN : "<<setprecision(6)<<fixed<<min<<endl;

}
