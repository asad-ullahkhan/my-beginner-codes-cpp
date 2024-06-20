#include <iostream>
using namespace std;
void prime(int x, int y){
     
   for (int i = x; i < y; i++)
   {
    bool flag=true;
    for (int j = 2; j <i ; j++)
    {
        
        if (i%j==0)
        {
            flag=false;
            break;
        }
        
    }
   if (flag==true)
   {
    cout<<i<<endl;
   }
    
}
}

int main()
{
    int x,y;
    cout<<"Enter your first value: ";
    cin>>x;
    cout<<"Enter your second value: ";
    cin>>y;
    prime(x,y);
    

    return 0;
}