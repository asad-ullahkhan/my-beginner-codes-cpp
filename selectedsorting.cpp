#include <iostream>
using namespace std;

int main()
{   int size;
    cout<<"Enter the array size: ";
     cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter data for "<<(i+1)<<": ";
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int j = 0; j < size-1; j++)
    {
        for (int i = j+1; i < size; i++)
        {
             if (arr[i]<=arr[j])
            {
              int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}