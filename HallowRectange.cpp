#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the value of row :";
    int x,y;
    cin>>x;
    cout<<"enter the value of coloum:";
    cin>>y;
    for(int row=0;row<x;row++)
    {
        if(row==0 || row==(x-1))
        {
            for(int col=0;col<y;col++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for(int i=0;i<y-2;i++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}