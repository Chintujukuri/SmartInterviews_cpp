
#include"iostream"
using std::cin;
using std::cout;
bool checkBit(int n,int i)
{
    return (n&(1<<i))!=0;
}

int main()
{
    int n,i;
    cin>>n>>i;
    cout << checkBit(n, i)<<"\n";
    return 0;
}