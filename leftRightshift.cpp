#include<iostream>
using namespace std;
int main()
{
    // left shift operator for +ve no.
    // output: The no get mulitiplyed by 2
    // int a=12;
    // cout<<(a<<2);
    // int b=-5;
    // cout<<(b<<1);

    //right shift operators
    int c=11;
    cout<<(c>>1);
    int d=-5; //in case of negative no the shifted bit is replaced by 1 not by o
    cout<<(d>>1);
    return 0; 
}