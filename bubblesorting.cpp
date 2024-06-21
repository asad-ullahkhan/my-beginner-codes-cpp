#include <iostream>
using namespace std;

int main()
{
    int size,temp;
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
        for (int j = 0; j < size; j++)
        {
            if (arr[i]<=arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"the data for "<<(i+1)<<" is : ";
        cout<<arr[i];
        cout<<endl;
    }

    return 0;
}