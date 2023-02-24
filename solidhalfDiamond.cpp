// 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int i=0;i<row+1;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=0;row<n-1;row++)
    {
        for(int i=0;i<n-row-1;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0; 
}