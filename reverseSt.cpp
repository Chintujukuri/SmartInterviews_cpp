#include <iostream>
#include <stack>
using namespace std;
int main()
{
    cout << "enter the string: ";
    string str;
    cin >> str;
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }
    string ans = "";
    while (!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }
    cout<<ans;
}