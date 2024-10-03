#include <iostream>

using namespace std;

int main()
{

    int row,col;
    cout<<"Enter the number of rows in your matrix:";
    cin>>row;
    cout<<"Enter the number of columns in your matrix:";
    cin>>col;
    int mat[row][col],ans;
    bool flag=false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> mat[i][j];
        }

    }
    cout<<"what do you want to search in your matrix:";
    cin>>ans;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ans==mat[i][j])
            {
                cout<<"your search is founded at row "<<i+1<<" column "<<j+1;
                flag=true;
                break;
            }
            
        }
        
    }
    if (flag==false)
    {
        cout<<"your search is not in given matrix";
    }
    
    
}