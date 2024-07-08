#include <bits/stdc++.h>
using namespace std;

void windowMaximumSum(vector<int> &arr, int n, int k)
{
    deque<int> dq;
    int sum = 0;

    // Process the first k elements separately
    for (int i = 0; i < k; ++i)
    {
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // Add the maximum of the first window
    sum += arr[dq.front()];

    // Process the rest of the elements
    for (int i = k; i < n; ++i)
    {
        // Remove elements not part of this window
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // Remove elements smaller than the current element from the deque
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }

        // Add current element at the back of the deque
        dq.push_back(i);

        // Add the maximum of the current window
        sum += arr[dq.front()];
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        windowMaximumSum(arr, n, k);
    }
    return 0;
}
