/*
given two numbers a and b.find a raise to the power b.
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,i,result=1;  //a is number ans b is power i.e a^b
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;

    for(i=1;i<=b;i++)
    {
         result=result*a;
         cout<<result<<endl;
    }
    cout<<a<<"^"<<b<<"="<<result;

}