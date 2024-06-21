#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter your first number; ";
    cin>>x;
    cout<<"Enter your secoud number; ";
    cin>>y;
    for (int i = 1; i < SIZE_MAX; i++)
    {
        if ((i%x==0)&&(i%y==0))
        {
            cout<<i;
            break;
        }
        
    }
    
   
    
    

    return 0;
}