#include <iostream>
using namespace std;

int main()
{
    long int j=0,y,x,z;
    cout<<"Enter first positive number to find its GCD: ";
    cin>>x;
    cout<<"Enter secound positive number to find its GCD: ";
    cin>>y;
    z=max(x,y);
    for (long int i = 2; i < z; i++)
    {
       if ( (x%i)==0 && (y%i)==0)
       {
        j=max(j,i);
       }
        
    }
    cout<<"the GCD of "<<x<<" and "<<y<<" is: "<<j;
    

    return 0;
}