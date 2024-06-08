#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter your first no." <<endl;
    cin>>a;
    cout<<"enter your first no." <<endl;
    cin>>b;
    cout<<"enter your first no." <<endl;
    cin>>c;
    
    if (a>b)
    {
       if (a>c)
       {
         cout<<a<<" is the largerest number";
       }else
       {
        cout<<c<<" is the largest number";
       }
       
       
    }
    else if (b>c)
    {
       cout<<b<<" is the largest number";
    }else if (c>b)
    {
        cout<<c<<" is the largest number";
    }
    else{
        cout<<"a=b=c";
    }
    
    

    return 0;
}