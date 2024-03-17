#include <iostream>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans = ans * 10 + (n % 10);
        n /= 10;
    }
    return ans;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = reverse(reverse(a) + reverse(b));
    }
    cout << sum << "\n";
    return 0;
}