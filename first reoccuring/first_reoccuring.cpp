#include <iostream>

using namespace std;

int main()
{

    int x,N=10,idx[N],min_dx=INT_MAX;
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
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    for (int i = 0; i < x; i++)
    {
        if (idx[arr[i]]!=-1)
        {
            min_dx=min(min_dx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
        
    }
    if (min_dx==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<min_dx+1<<endl;
    }
    
    return 0;
}