#include <iostream>

using namespace std;

int main()
{

    int DecNum,rem,ans=0,pow=1;
    cout<<"Enter the number you want to convert into binary:";
    cin>>DecNum;
    
    while (DecNum>0)
    {
        rem=DecNum%2;
        DecNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    cout<<ans;

    return 0;
}