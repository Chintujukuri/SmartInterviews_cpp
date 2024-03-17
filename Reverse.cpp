#include "bits/stdc++.h"
using namespace std;

bool CheckPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "enter name: ";
    cin >> name;
    cout << "your name: " << name << endl;

    int len = getLength(name);
    reverse(name, len);
    // reverse(name, len);
    cout << "Reverse of your name: " << name << endl;
    cout << "Palindrome: " << CheckPalindrome(name, len);
    return 0;
}