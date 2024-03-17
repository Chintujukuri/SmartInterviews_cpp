#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper part of the diamond
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n / 2 || j - i == n / 2 || i - j == n / 2 || i + j == n + n / 2 - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
