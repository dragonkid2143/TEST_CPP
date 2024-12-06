#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    if (a>b && a>c)
        cout<<"The largest number is "<<a;
    else if(b>c && b>a)
        cout<<"The largest number is "<<b;
    else if(c>a && c>b)
        cout<<"The largest number is "<<c;
    else if(a==b && a==c)
        cout<<"All numbers are equal!";
    else
        cout<<"Two numbers are equally the largest!";
}