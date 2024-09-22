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
    int a=1;
    for (int i = 0; i < x; i++)
    {
        int j=i,curr=0;
        while (j<x)
        {
            curr+=arr[j];
            j++;
            cout<<"The sum of "<<a<<" sub array is "<<curr<<endl;
            a++;
        }
    }
    
    

    return 0;
}