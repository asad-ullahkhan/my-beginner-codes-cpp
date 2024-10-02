#include <iostream>
#include <climits>

using namespace std;

int main()
{
    //first method
    // cout<<"_____FIRST METHOD_____\n"<<endl;
    // int x,sum;
    // cout<<"how many elements are there in your array:";
    // cin>>x;
    // int arr[x];
    // for (int i = 0; i < x; i++)
    // {
    //     cout<<"Enter your "<<i+1<<" element:";
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < x; i++)
    // {
    //     cout<<"your "<<i+1<<" element is "<<arr[i]<<endl;
    // }
    // int currsum[x+1];
    // currsum[0]=0;
    // for (int i = 1; i <= x; i++)
    // {
    //     currsum[i]=currsum[i-1]+arr[i-1];
    // }
    // int max_sum=INT_MIN;
    // for (int i = 1; i <= x; i++)
    // {
    //     sum=0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum=currsum[i]-currsum[j];
    //         max_sum=max(sum,max_sum);
    //     }
        
    // }
    // cout<<"the maximum sum that can be attained from any sub array is "<<max_sum<<endl;
    //second method
    cout<<"_____SECOND METHOD_____\n"<<endl;
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
    int currsum=0,max_sum=INT_MIN;
    for (int i = 0; i < x; i++)
    {
        currsum+=arr[i];
        if (currsum<0)
        {
            currsum=0;
        }
        max_sum=max(max_sum,currsum);
    }
    cout<<"the maximum sum that can be attained from any sub array is "<<max_sum<<endl;

    return 0;
}