#include <iostream>

using namespace std;

int main()
{

    int row,col;
    cout<<"Enter the number of rows in your matrix:";
    cin>>row;
    cout<<"Enter the number of columns in your matrix:";
    cin>>col;
    int mat1[row][col],mat2[row][col],res[col][row];
    cout<<"first matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            res[i][j]=0;
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> mat1[i][j];
        }
        
    }
    cout<<"second matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> mat2[i][j];
        }
        
    }
    cout<<"your first matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"your second matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    // multiplication
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)
            {
                res[i][j]+=(mat1[i][k]*mat2[k][j]);
            }
            
        }
        
    }
    cout<<"result matrix:"<<endl;
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