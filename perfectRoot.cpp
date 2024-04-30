#include "iostream"
using namespace std;

int squareRoot(int n)
{
    if (n == 0 || n == 1)
        return 0;

    int low = 0, high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sq = mid * mid;

        if (sq == n)
            return mid;
        else if (sq < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square root of " << n << " is " << squareRoot(n) << endl;
    return 0;
}