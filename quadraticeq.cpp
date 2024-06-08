#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,x,y;
    cout<<"a(x^2)+bx+c=0"<<endl<<"what is the value of a : ";
    cin>>a;
    cout<<"what is the value of b : ";
    cin>>b;
    cout<<"what is the value of c : ";
    cin>>c;

 

    x=((-b+sqrt((b*b)-(4*a*b)))/(2*a));
    
    cout<<x;
    return 0;
}