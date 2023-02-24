// *
// *1*
// *121*
// *12321*
// *1234321*
// *12321*
// *121*
// *1*
// *


#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        cout<<"*";
        int i;
        for( i=0;i<row;i++)
        {
            cout<<i+1;
        }
        
        i-=1;
        
        for(;i>=1;i--)
        {
            cout<<i;
        }
        if(row!=0)
        {cout<<"*";}
        
        cout<<endl;
        
    }
    for(int row=0;row<n-1;row++)
    {
        cout<<"*";
        int i;
        for( i=0;i<n-2-row;i++)
        {
            cout<<i+1;
        }
        
        i-=1;
        
        for(;i>=1;i--)
        {
            cout<<i;
        }
        if(row!=n-2)
        {cout<<"*";}
        
        cout<<endl;
        
    }
    return 0; 
}