#include <iostream>
using namespace std;

class Stack
{

public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = x;
        }
        else
            cout << "stack overflow\n";
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "stack underFlow\n";
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "stack is Empty\n";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    int sizeOf()
    {
        return top + 1;
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    cout << st.sizeOf() << "\n";
    st.push(44);
    st.push(22);
    cout << st.sizeOf() << "\n";
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    // system("cls");

    return 0;
}