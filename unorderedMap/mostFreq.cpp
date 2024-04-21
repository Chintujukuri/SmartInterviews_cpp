#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{

    cout << "enter no.of elements: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter array elements: \n";
    for (auto &i : arr)
        cin >> i;
    unordered_map<int, int> freqMap;

    // Count the frequency of each number in the array
    for (int num : arr)
    {
        freqMap[num]++;
    }

    // Find the number with the highest frequency
    int maxFreq = 0;
    int mostFreqNum = -1;
    for (auto x : freqMap)
    {
        if (x.second > maxFreq)
        {
            maxFreq = x.second;
            mostFreqNum = x.first;
        }
    }
    cout << "highest frequency number is: " << mostFreqNum
         << " with Frequency: " << maxFreq;

    return 0;
}
