#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row <n;row++)
    {
        for(int i=0;i<row+1;i++)
        {
            if(row==n-1)
            {
                cout<<i+1 <<" ";
            }
            else if(i==0 || i==row)
            {
                cout<<i+1;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    return 0; 
}