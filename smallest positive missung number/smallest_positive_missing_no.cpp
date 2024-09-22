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
    int N=1e6 +2;
    bool check[N];
    for (int i = 0; i <N ; i++)
    {
        check[i]=false;
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i]>=0)
        {
            check[arr[i]]=true;
        }
    }
    for (int i = 1; i < N; i++)
    {
        if (check[i]==false)
        {
            cout<<i<<" is the smallest missing integer"<<endl;
            break;
        }else if (check[N]==true)
        {
            cout<<"NO! number is the smallest missing integer"<<endl;
        }
        
        
    }
    
    

    return 0;
}