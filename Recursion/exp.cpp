#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Include the numeric header for accumulate
using namespace std;

bool can_complete_tasks(vector<int> &tasks, int K, int mid)
{
    int current_time = 0;
    int workers = 0;
    for (int task : tasks)
    {
        if (current_time + task <= mid)
        {
            current_time += task;
        }
        else
        {
            workers++;
            current_time = task;
        }
    }
    workers++; // Account for the last worker
    return workers <= K;
}

int min_time_to_complete_tasks(int T, vector<pair<int, vector<int>>> &test_cases)
{
    for (int t = 0; t < T; ++t)
    {
        int N, K;
        cin >> N >> K;
        vector<int> tasks(N);
        for (int i = 0; i < N; ++i)
            cin >> tasks[i];

        int low = *max_element(tasks.begin(), tasks.end());
        int high = accumulate(tasks.begin(), tasks.end(), 0);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (can_complete_tasks(tasks, K, mid))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << low << endl;
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    vector<pair<int, vector<int>>> test_cases(T);
    for (int t = 0; t < T; ++t)
    {
        int N, K;
        cin >> N >> K;
        vector<int> tasks(N);
        for (int i = 0; i < N; ++i)
            cin >> tasks[i];
        test_cases[t] = make_pair(K, tasks);
    }

    min_time_to_complete_tasks(T, test_cases);

    return 0;
}
