#include <iostream>
#include <vector>
using namespace std;

void findFirstMissingPositive(vector<int> &arr, int n)
{
    // Step 1: Place each number in its correct position if possible
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    // Step 2: Find the first missing positive integer
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << "\n";
            return;
        }
    }
    cout << n + 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        findFirstMissingPositive(arr, N);
    }

    return 0;
}
