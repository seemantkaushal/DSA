// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        int col;
        for( col=0;col<row+1;col++)
        {

            char ch =col+1+64;
            cout<<ch;
        }
        col=row;
        for(;col>=1;col--)
        {
            char ch=col+64;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0; 
}