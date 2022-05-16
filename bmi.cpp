#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float weight, height, bmi;
    cin>>weight>>height;
    bmi=weight/(height*height);
    cout.precision(2);
    cout << fixed << bmi<<endl;
    if(bmi<18.5) cout<<"Underweight";
    else if(18.5<=bmi && bmi<25) cout<<"Normal";
    else if(25<=bmi && bmi<30) cout<<"Overweight";
    else if(30<=bmi) cout<<"Obese";
    return 0;

    
}