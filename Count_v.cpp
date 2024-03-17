#include "iostream"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int curval = 0, val = 0;
    if (cin >> curval)
    {
        int cnt = 1;
        while (cin >> val)
        {
            if (val == curval)
                cnt++;
            else
            {
                cout << curval << " occur " << cnt << " time " << endl;
                curval = val;
                cnt = 1;
            }
        }
        cout << curval << " occur " << cnt << " time " << endl;
    }
    return 0;
}

// 1 2 1 1 2 2^Z
// 1 occur 1 time 
// 2 occur 1 time 
// 1 occur 2 time 
// 2 occur 2 time 
// PS E:\SmartInterviews> 