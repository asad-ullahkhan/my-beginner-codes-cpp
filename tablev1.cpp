/*this is table v1.0 it can give you a table of any positve integer to any value*/

#include <iostream>
using namespace std;

int main()
{
   
    int k , j ,l ;
    cout<<"enter the multiplicant : "<<endl ;
    cin>>j;
    
    cout<<"enter the value of multiplier : ";
    cin>>l;
    for (int k = 1 ; k <= l; ++k )
    {   cout << j <<" * "<< k <<" = "<< j * k << endl;
        
     } 
      
    return 0;
   

  
 }

