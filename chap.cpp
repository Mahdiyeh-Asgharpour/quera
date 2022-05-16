#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int i;
    for( int i=0;i<n.size();i++)
    {
    
   int x=n[i];
    switch (n[i])
    {
        case '0':
            cout<<"0:"<<endl;
            break;
        case '1':
            cout<<"1: 1"<<endl;
            break;
        case '2':
            cout<<"2: 22"<<endl;
            break;
        case '3':
            cout<<"3: 333"<<endl;
            break;
        case '4':
            cout<<"4: 4444"<<endl;
            break;
        case '5':
            cout<<"5: 55555"<<endl;
            break;
        case '6':
            cout<<"6: 666666"<<endl;
            break;
        case '7':
            cout<<"7: 7777777"<<endl;
            break;
        case '8':
            cout<<"8: 88888888"<<endl;
            break;
        case '9':
            cout<<"9: 999999999"<<endl;
            break;
    }
    }
    return 0;

}