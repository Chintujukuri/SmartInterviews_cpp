#include <iostream>
using namespace std;

int main()
{
  
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long xorSum = 0;
        for (int i = 0; i < 32; i++)
        { // Considering bits from 0 to 31
            long long countOnes = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] & (1 << i)) // Checking if ith bit is set
                    countOnes++;
            }
            // Number of pairs with ith bit set is countOnes*(n-countOnes)
            xorSum += (1LL << i) * countOnes * (n - countOnes);
        }

        cout << xorSum * 2 << "\n";
    return 0;
}
