#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        if(row==0 || row==n-1)
        {
            for(int i=0;i<n-row;i++)
            {
                cout<<"* ";