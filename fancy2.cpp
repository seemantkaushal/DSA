// 1
// 1*2
// 1*2*3
// 1*2*3*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            if(col!=row){
                cout<<col+1<<"*";
            }
            else{
                cout<<col+1;
            }
                
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            if(col!=n-row-1){
                cout<<n-row<<"*";
            }
            else{
                cout<<col+1;
            }
            
        }
        cout<<endl;
    }
    return 0; 
}