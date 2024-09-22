#include <iostream>

using namespace std;

int main()
{   
    int x;
    cout<<"how many elements are there in your array:";
    cin>>x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout<<"Enter your "<<i+1<<" element:";
        cin>>arr[i];
    }
    cout<<"before"<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<"your "<<i+1<<" element is "<<arr[i]<<endl;
    }
    cout<<"After"<<endl;
    for (int i = 1; i < x; i++)
    {
        {
        // method 1
        // if (arr[i]<arr[i-1])
        // {
        //     arr[i]=arr[i-1];
        // }
        }
        // method 2
        arr[i]=max(arr[i],arr[i-1]);
        
    }
    for (int i = 0; i < x; i++)
    {
        cout<<"your "<<i+1<<" element is "<<arr[i]<<endl;
    }

    

    return 0;
}