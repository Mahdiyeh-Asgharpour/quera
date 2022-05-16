#include <iostream>
using namespace std;
int main(){
    int a, b, c, q, i;
    int w, e, r, t, y, u[6], sum=0;
    q=0;
    y=0;
    cin>>a>>b>>c;
    for(i=0;i<3;i++)
    {
        cin>>w>>e;
        if (e>y) y=e;
        u[q]=w;
        u[q+1]=e;
        q=q+2;
    }
    y++;
    int o[y];
    for(i=0;i<y;i++) o[i]=0;
    for(i=0;i<6;i+=2)
    {
        r=u[i+1];
        t=u[i];
        for(t;t<r;t++) o[t]++;
    }
    for(i=0;i<y;i++)
    {
        if(o[i]==1)
        {
            sum+= a;
        }
        if(o[i]==2)
        {
            sum += b*2;
        }
        if(o[i]==3)
        {
            sum += c*3;
        }
    }
    cout<<sum;
    return 0;
}