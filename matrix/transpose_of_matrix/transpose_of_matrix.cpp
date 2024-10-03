#include <iostream>

using namespace std;

int main()
{

    int row,col;
    cout<<"Enter the number of rows in your matrix:";
    cin>>row;
    cout<<"Enter the number of columns in your matrix:";
    cin>>col;
    int mat[row][col],res[col][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> mat[i][j];
        }
        
    }
    cout<<"your matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            res[j][i]=mat[i][j];
        }
        
    }
    cout<<"Transpose matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << res[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}