#include <iostream>

using namespace std;

int main()
{
    bool check=true;
    int n;
    cout<<"how many letter are there in your word:";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the word you want to check as a palendrome:";
    cin>>arr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            check=false;
            break;
        }
        
    }
    if (check==false)
    {
        cout<<"no! its not a palendrome"<<endl;
    }else{
        cout<<"its a palendrome"<<endl;
    }
    
    

    return 0;
}