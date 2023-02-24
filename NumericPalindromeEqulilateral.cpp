//      1
//     121
//    12321
//   1234321
//  123454321
// 12345654321

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int i=0;i<n-row-1;i++) //for spaces 
        {
            cout<<" ";
        }
        int j;
        for( j=0;j<row+1;j++)
        {
            cout<<j+1;
        }
        j=j-1;
        for(;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;


    }
    return 0; 
}