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
    cout<<"Before sorting."<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<"the data for "<<(i+1)<<" is : ";
        cout<<arr[i];
        cout<<endl;
    }
    for (int i = 1; i < size; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (current<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
  cout<<"after sorting."<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"the data for "<<(i+1)<<" is : ";
        cout<<arr[i];
        cout<<endl;
    }

    return 0;
}