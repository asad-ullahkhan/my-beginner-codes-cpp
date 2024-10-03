#include <iostream>
#include<cmath>
using namespace std;

int bitnum(int BiNum){
    int ans=0,x=0;
    while (BiNum>0)
    {
        int rem;
        rem=BiNum%10;
        BiNum/=10;
        ans+=rem*pow(2,x);
        x++;
    }
    cout<<ans;
    return 0;
}

int main()
{
    int BiNum;
    cout<<"Enter the number you want to convert into binary:";
    cin>>BiNum;
    bitnum(BiNum);

    return 0;
}