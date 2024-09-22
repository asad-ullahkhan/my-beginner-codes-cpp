#include <iostream>

using namespace std;

int main()
{

    int x,sum;
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
    cout<<"enter the sum of a sub array of given array:";
    cin>>sum;
    int curr;
    for (int i = 0; i < x; i++)
    {
        curr=0;
        int j=i;
        while (curr<sum)
        {
            curr+=arr[j];
            j++;
        }
        if (curr==sum)
        {
            cout<<"the sub array start from "<<i+1<<" and end at "<<j-1;
            break;
        }
    }
    if (sum!=curr)
    {
        cout<<"There is no posible subarray that can add upto given sum";
    }
    
    return 0;
}