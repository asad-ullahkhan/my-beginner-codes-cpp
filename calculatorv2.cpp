/*this is calculatorv1.0 it is limited to only
 2 variable and 4 operation i.e +,_,*,/.*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    char x;
    cout<<"enter the value of a : " ;
    cin>>a;
    cout<<"enter the value of b : " ;
    cin>>b;
    cout<<"enter the operator : " ;
    cin>>x;
    
    switch (x)
    {
    case '+' :
        cout<<"the value of "<<a <<x<< b<<" is "<<a+b;
        break;
    
    case '-' :
        cout<<"the value of "<<a<<x<<b<<"is"<<a-b;
        break;
    
    case '*' :
        cout<<"the value of "<<a<<x<<b<<"is"<<a*b;
        break;
    
    case '/' :
        cout<<"the value of "<<a<<x<<b<<"is"<<a/b;
        break;
    case '%' :
        cout<<"the value of "<<a<<x<<b<<"is"<<a%b;
        break;
    
    default:cout<<"try again with proper values";
        break;
    } 

    return 0;
}