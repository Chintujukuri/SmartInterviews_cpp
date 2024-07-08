#include <iostream>
#include <cmath>

long long cubeRoot(long long n)
{
    if (n == 0 || n == 1)
        return n;

    long long cubeRoot = 1;
    long long factor = 2;
    bool isNegative = false;

    if (n < 0)
    {
        n = -n; // Convert negative number to positive
        isNegative = true;
    }

    while (n > 1)
    {
        int count = 0;
        while (n % factor == 0)
        {
            n /= factor;
            count++;
        }
        cubeRoot *= pow(factor, count / 3);
        factor++;
    }

    if (isNegative && cubeRoot % 2 != 0)
    {
        // If the cube root is odd and the input was negative, make the cube root negative
        cubeRoot = -cubeRoot;
    }

    return cubeRoot;
}

int main()
{
    long long n;
    std::cin >> n;
    long long result = cubeRoot(n);
    std::cout << result << "\n";

    return 0;
}
