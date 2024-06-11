#include <iostream>
#include<cmath>
using namespace std;

int main()
{   
    int a,x,y,z=0;
   
    cout<<"which number do you want to reverse: ";
    
    cin>>a;
    
    x=a;

     while (a>0)
     {
        y=a%10;
        z=(z*10)+y;
        a=a/10;
     }
     
     
        
    
    cout<<"the reverse of "<<x<<" is " << z<<endl ; 
    if (z==x)
    {
        cout<<"The "<<x<<" is palindrome";
    }
    else if(z!=x){
         cout<<"the "<<x<<" is not a palindrome";
    }
 
    
    return 0;
}