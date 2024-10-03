#include <iostream>

using namespace std;

int main()
{
    int row=4,c=4;
    bool flag=true;
    int ans,mat[row][c]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    cout<<"what do you want to search in your matrix:";
    cin>>ans;
    int r=0;
    c-=1;
    while (row>r&&c>=0)
    {   
        if (ans==mat[r][c])
        {
            cout<<"founded at row "<<r+1<<" column "<<c+1;
            flag=false;
            break;
        }else if (ans<mat[r][c])
        {
            c--;
        }else if (ans>mat[r][c])
        {
            r++;
        }       

    }
    if (flag==true)
    {
        cout<<"not found";
    }
    
    return 0;
}