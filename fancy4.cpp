// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

#include<iostream>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int i=0;i<n+3-row;i++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*row+1;j++)
        {
            if(j%2==0)
            {
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        for(int i=0;i<n+3-row;i++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0; 
}