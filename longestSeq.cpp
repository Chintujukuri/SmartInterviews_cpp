#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool check(vector<int> &ca, vector<int> &cb)
{
    for (int i = 0; i < 26; i++)
    {
        if (cb[i] > 0 && ca[i] < cb[i])
        {
            return false;
        }
    }
    return true;
}

bool valid(int mid, const string &a, const string &b, int M, int N)
{
    vector<int> ca(26, 0);
    vector<int> cb(26, 0);
    for (char ch : a)
    {
        cb[ch - 'a']++;
    }

    for (int i = 0; i < mid; i++)
    {
        ca[b[i] - 'a']++;
    }

    if (check(ca, cb))
        return true;

    for (int i = mid; i < N; i++)
    {
        ca[b[i] - 'a']++;
        ca[b[i - mid] - 'a']--;
        if (check(ca, cb))
            return true;
    }

    return false;
}

int enclosing(const string &a, const string &b, int M, int N)
{
    int lo = M;
    int hi = N;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (valid(mid, a, b, M, N))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string A, B;
        cin >> A >> B;
        int M = A.length();
        int N = B.length();
        int result = enclosing(A, B, M, N);
        cout << result << endl;
    }

    return 0;
}