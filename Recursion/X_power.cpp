#include<iostream>
using namespace std;

int calPower(int x,int n)
{
 if(n==0) return 1;
 if(x==0) return 0;
 return x*calPower(x,n-1);
}
int main()
{
    int n=5,x=2;
    int res=calPower(x,n);
    cout<<res;

    return 0;
}