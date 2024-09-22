#include <iostream>
#include<limits.h>
using namespace std;

int main()
{

    int x,d=0,pre=CHAR_MIN;/* day is 1 because first day is also record breaker*/
    cout<<"how many elements are there in your array:";
    cin>>x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout<<"Enter your "<<i+1<<" element:";
        cin>>arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout<<"your "<<i+1<<" element is "<<arr[i]<<endl;
    }
    if (x==1)
    {
        cout<<"the record breaker days are 1";
        return 0;
    }
    
    for (int i = 0; i < x-1; i++)
    {
        if (arr[i]>pre&&arr[i]>arr[i+1])
        {
            d++;
            pre=arr[i];
        }
        
        
    }
    cout<<"the record breaker days are "<<d;
    return 0;
}