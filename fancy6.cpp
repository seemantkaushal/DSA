#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counter=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<counter;
            if(j!=i)
            {
                cout<<"*";
            }
            counter++;

        }
        cout<<endl;

    }
    counter=counter-n;
    
    for(int i=0;i<n;i++)
    {
        int start=counter;
        for(int j=0;j<n-i;j++)
        {
            
            cout<<start;
            if(j!=n-i-1)
            {
                cout<<"*";
            }
            start++;
            

        }
        cout<<endl;
        counter=counter-(n-i-1);

    }
    return 0; 
}