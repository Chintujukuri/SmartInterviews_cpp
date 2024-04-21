//sequence of fibonacci series:-
#include<iostream>
using namespace std;

void printFibo(int a,int b,int n)
{
    if(n==0) return;
    int c=b+a;
    cout<<c<<" ";
    printFibo(c,b,n-1);

}

int main()
{
    int n=7;
    cout<<"0 "<<"1 ";
    printFibo(0,1,n-2);
    return 0;

}