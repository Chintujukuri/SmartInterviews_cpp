
// Given a 2D square matrix, rotate it by 90 degrees clockwise.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> ar[i][j];
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(ar[i][j], ar[j][i]);
        }
    }

//Transpose the matrixTaking min(n, m) ensures that we don't access elements beyond the smaller dimension,
// preventing index out-of-bounds errors.
//It allows us to perform the transpose operation only on the portion of the matrix 
//that fits within both the number of rows and columns.
    // for (int i = 0; i < min(n, m); i++)
    // {
    //     for (int j = i + 1; j < min(n, m); j++)
    //     {
    //         swap(ar[i][j], ar[j][i]);
    //     }
    // }

    // Reverse the columns of the transposed matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        {
            swap(ar[i][j], ar[i][m - 1 - j]);
        }
    }

    // Print the final matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }

    return 0;
}
