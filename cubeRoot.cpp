#include <iostream>
using namespace std;

long long cubeRoot(long long n)
{
    if (n == 0 || n == 1)
        return n;

    long long low, high;
    if (n < 0)
    {
        low = n;
        high = 0;
    }
    else
    {
        low = 0;
        high = n;
    }

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long cube = mid * mid * mid;

        if (cube == n)
            return mid;
        else if (cube < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // indicates that the cube root is not an integer
}

int main()
{

        long long n;
        cout << "Enter the number: ";
        cin >> n;
        long long result = cubeRoot(n);
        cout << "Cube root of " << n << " is " << result << endl;
    return 0;
}
