#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y,original;
   
    float z=0;
    cout<<"Enter a positive number: ";
    cin>>x;
    original=x;
    while (x!=0)
    { 
        y=x%10;
        z+=pow(y,3);
        x=x/10;
    }
    if (z==original)
    {
        cout<<"The given number is an armstrong number"<<endl;
    }
    else{
         cout<<"The given number is not an armstrong number"<<endl;
    }
    
    

    return 0;
}