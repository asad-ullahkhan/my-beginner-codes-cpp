#include <iostream>

using namespace std;

int main()
{
    int x,a=1,ga;
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
    for (int i = 1; i < x-1; i++)
    {
        int diff=arr[i]-arr[i-1];
        if (arr[i]-arr[i-1]!=arr[i+1]-arr[i])
        {   
            ga=a;
            a=1;
        }
        
        if (arr[i]-arr[i-1]==diff)
        {
            a++;
        }
        else
        {
            a+=1;  /*we add one so that the last element of difference is added*/
            break;
        }
        
    }
    cout<<"The longest Arithmetic sub array is "<<ga;

    return 0;
}