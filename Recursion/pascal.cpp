#include <iostream>
using namespace std;

// Function to calculate binomial coefficient (n choose k)
int binomialCoefficient(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int numRows)
{
    for (int i = 0; i < numRows; i++)
    {
        // Print spaces to align triangle
        for (int j = 0; j < numRows - i - 1; j++)
        {
            cout << " ";
        }
        // Print values in current row
        for (int j = 0; j <= i; j++)
        {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    printPascalsTriangle(numRows);

    return 0;
}

// #include <vector>
// using namespace std;

// vector<int> Solution::getRow(int A)
// {
//     vector<int> row(A + 1);
//     row[0] = 1;
//     for (int i = 1; i <= A; i++)
//         row[i] = (long)row[i - 1] * (A - i + 1) / i;
//     return row;
// }
