#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"write a no. you want to find out about as even :"<<endl;
    cin>>x;

    if ((x%2)==1)
    {
        cout<<"it is odd";
    }
    else
    {
        cout<<"it is even";
    }
    
    
    return 0;
}