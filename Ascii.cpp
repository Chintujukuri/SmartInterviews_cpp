#include <iostream>
using namespace std;
int main()
{
    cout << "enter the string: ";
    string str;
    cin >> str;
    string int_arr;
    for (char ch : str)
    {
        int_arr = int_arr + to_string(int(ch));
        int_arr+=" ";
    }
    cout << int_arr;
}

// enter the string : nithin 
// 110 105 116 104 105 110