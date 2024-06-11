#include <iostream>
#include<cmath>
using namespace std;

int main()
{   
    int x,y,z=0;

    cout<<"which number do you want to reverse: ";
    
    cin>>x;
    
   
     while (x>0)
     {
        y=x%10;
        z=(z*10)+y;
        x=x/10;
     }
     
     
        
    
    cout<<"The reverse of "<<x<<" is " << z<<endl ; 

    return 0;
}