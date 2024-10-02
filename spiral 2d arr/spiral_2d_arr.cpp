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

    int row_start=0,row_end=row-1,col_start=0,col_end=col-1;
    
    while (row_start<=row_end&&col_start<=col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        for (int col = col_end; col >= col_start; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
        
    }
    

    return 0;
}