//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int i=0;i<n-row-1;i++)
        {
            cout<<" ";
        }
        int start=1;
        for(int col=0; col<2*row+1;col++)
        {
            

            if(row==0 || row==n-1)
            {
               if(col%2 ==0)
               {
                cout<<start;
                start=start+1;
               }
               else{
                cout<<" ";
               }
            }

            else
            {
                if(col==0 )
                {
                cout<<1;   
                }
                else if(col==2*row)
                {
                    cout<<row+1;
                }
                else
                {
                    cout<<" ";
                }
           
            }
            
            
        }
        cout<<endl;
        
    }
    return 0; 
}