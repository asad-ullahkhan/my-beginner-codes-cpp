#include <iostream>

using namespace std;

int main()
{

    int row,col;
    cout<<"how many rows are there in your 2d array: ";
    cin>>row;
    cout<<"how many columns are there in your 2d array: ";
    cin>>col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"Enter the element of row "<<i+1<<" and column "<<j+1<<":";
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}