/* Two Set Bits Max Score: 200
Look at the following sequence:
3, 5, 6, 9, 10, 12, 17, 18, 20....
All the numbers in the series have exactly 2 bits set in their binary representation.
Your task is simple, you have to find the Nth number of this sequence. */

#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 1000000007;

int countSetBits(long long n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

long long findNthNumber(int n)
{
    long long x = pow(2, ceil(log2(n)));
    int k = countSetBits(n);
    long long y = n - (x / 2);
    long long result = (1LL << k) + (1LL << (k + y));
    return result % MOD;
}

int main()
{
        int n;
        cin >> n;
        cout << findNthNumber(n) << endl;
    return 0;
}
