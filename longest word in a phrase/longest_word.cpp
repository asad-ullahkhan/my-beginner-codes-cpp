#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int n,curlen=0,maxlen=0,st=0,maxst=0;
    cout<<"how many letter are there in your word:";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter the line:";
    cin.getline(arr,n+1);
    for (int i = 0; true; i++)
    {   
        if (arr[i]==' '||arr[i]=='\0')
        {
            if (maxlen<curlen)
            {
                maxlen=curlen;
                maxst=st;
            }
            st=i+1;
            curlen=0;
        }else
        {
            curlen++;
        }
        if (arr[i]=='\0')
        {
            break;
        }
        
    }
    
    cout<<"the longest word in the given line is ";
   for (int i = 0; i < maxlen; i++)
   {
    cout<<arr[maxst+i];
   }
   
    cout<<" having length of "<<maxlen;
    
    
    
    
    return 0;
}