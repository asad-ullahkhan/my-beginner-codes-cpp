#include<iostream>
using namespace std;

int main(){
    int x;
    long factorial;
    cout<<"enter a positive integer : ";
    cin>>x;

    if (x<0)
    {
       cout<<"error factorial of negative number does not exist"; 
    }
    else{
        int sum = 0;
        for (int i = 0; i <= x; i++)
        {
          sum=sum+i;
          cout<<sum<<",";
        }
        
    }
    

    return 0;
}