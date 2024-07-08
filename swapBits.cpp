/*Given a number, swap the adjacent bits in the binary representation of the number, and print the new number formed after swapping
Binary Representation of 10: 000...1010
After swapping adjacent bits: 000...0101 (5) */

#include <bits/stdc++.h>
using namespace std;

int swapBits(int n)
{
    int evenB = n & 0xAAAAAAAA;
    int oddB = n & 0x55555555;
    // int evenB=n&0b101010101010101010101010u;
    // int oddB=n&0b010101010101010101010101u;
    int res = (evenB >> 1) | (oddB << 1);
    return res;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << swapBits(n) << "\n";
    }
    return 0;
}