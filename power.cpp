#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x,y,z;
    cout<<"Enter the a number: ";
    cin>>x;
    cout<<"Enter the power term: ";
    cin>>y;
    z=pow ( x,y);

    cout<<"the answer of "<<x<<" with power of "<<y<<" is; "<< z;

    return 0;
}