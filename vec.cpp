#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "enter vector size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element to add to the vactor:";
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    display(vec1);

    return 0;
}