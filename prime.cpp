#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter a positive number: ";
    cin>>x;
    bool flag=true;
    for (int i = 2; i <x ; i++)
    {
        
        if (x%i==0)
        {
            cout<<"not prime";
            flag=false;
            break;
        }
        
        
        
        
    }
    
    if (flag==true)
    {
        cout<<"prime";
    }
    
    
    

    return 0;
}