// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int i=0;i<n-row;i++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*row+1;j++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++)
    {
        for(int i=0;i<row+1;i++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*n-2*row-1;j++)
        {
            cout<<" ";
        }
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0; 
}