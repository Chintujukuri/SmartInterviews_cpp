#include <iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;
        cout << n * (n + 1) / 2 << " ";
        cout << n * (n + 1) << " ";
        cout << n * n << " ";
        cout << (n * (n + 1) * (2 * n + 1)) / 6 << " ";
        cout << (n * (n + 1) / 2) * (n * (n + 1) / 2) << endl;
    }

    return 0;
}
