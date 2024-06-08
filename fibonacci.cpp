//there is nothing in this version just had a new idea and i wrote it
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>> x ;
    int sum = 0;
        for (int i = 0; i <= x; i++)
        {
          sum=sum+i;
          cout<<sum<<",";
        }
    return 0;
}
