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
    for (int i = 0; i < x; i++)
    {
        cout<<"your "<<i+1<<" element is "<<arr[i]<<endl;
    }
    for (int i = 1; i < x; i++)
    {
        int current=arr[i],j = i-1;
        while (arr[j]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    int k;
    cout<<"which number do you want to find as a pair of sum:";
    cin>>k;
    int high=x-1,low=0;
    while (low<high)
    {
        if (arr[low]+arr[high]==k)
        {
            cout<<arr[low]<<"+"<<arr[high]<<"="<<k<<endl;
            break;
        }else if (arr[low]+arr[high]>k)
        {
            high--;
        }else if (arr[low]+arr[high]<k)
        {
            low++;
        }
    }    
    

    return 0;
}