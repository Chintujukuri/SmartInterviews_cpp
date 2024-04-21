#include <bits/stdc++.h>
using namespace std;

void printFrequencies(const string &str)
{
    unordered_map<string, int> wordFreq;
    stringstream ss(str);

    // To store individual words
    string word;
    while (ss >> word)
        wordFreq[word]++;
    // while (getline(ss, word, ' '))
    //     wordFreq[word]++;
    for (auto x : wordFreq)
        cout << x.first << " " << x.second << "\n";

    auto it = wordFreq.begin();
    cout << "first pair: " << it->first << " " << it->second << "\n";
}

// Driver code
int main()
{
    string str = "The unordered_map container in C++ provides an efficient way to store key-value pairs";
    // cout << "enter the sentence: \n";
    // getline(cin, str);
    printFrequencies(str);

    return 0;
}
