#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a positive number: ";
    cin>>x;
    for (int i = 1; i < x+1; i++)
    {
        if (x%i==0)
        {
            cout<<i<<",";
        }
        
    }
    

    return 0;
}