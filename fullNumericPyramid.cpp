//         1 
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int j=0;j<n-row-1;j++)
        {
            cout<<"  ";
        }
        int col;
        for( col=0;col<row+1;col++)
        {
            cout<<col+row+1<<" ";
        }
        
        for(int i=0;i<row;i++)
        {
            //cout<<col+row-1-i<<" ";
            cout<<2*row-i <<" ";
        }
        cout<<endl;
        
    }
    return 0; 
}