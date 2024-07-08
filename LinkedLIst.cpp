#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtHead(int value)
    {
        node *newNode = new node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int value)
    {
        node *newNode = new node();
        newNode->data = value;
        newNode->next = nullptr;

        if (!head)
        {
            head = newNode;
            return;
        }
        node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtIndex(int value, int index)
    {
        if (index < 0)
            return;
        if (index == 0)
        {
            insertAtHead(value);
            return;
        }

        node *newNode = new node();
        newNode->data = value;
        node *temp = head;
        int c_index = 0;

        while (temp && c_index < index - 1)
        {
            temp = temp->next;
            c_index++;
        }
        if (temp)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void deleteAtHead()
    {
        if (!head)
            return;
        node *temp = head;
        head = head->next;
        delete temp;
    }
    void deleteAtTail()
    {
        if (!head->next)
        {
            delete head;
            head = nullptr;
            return;
        }
        node *temp = head;
        while (temp->next && temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteAtIndex(int index)
    {
        if (!head || index < 0)
            return;
        if (index == 0)
        {
            deleteAtHead();
            return;
        }
        node *current = head;
        int c_index = 0;
        while (current && c_index < index - 1)
        {
            current = current->next;
            c_index++;
        }

        if (current && current->next)
        {
            node *temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }
    void printList()
    {
        node *current = head;
        while (current)
        {
            cout << "[" << current->data << "|" << current->next << "]->";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;

    // Insert at head
    list.insertAtHead(1);
    list.insertAtHead(2);
    list.insertAtHead(3);
    list.printList(); // Output: 3 2 1

    // Insert at tail
    list.insertAtTail(4);
    list.insertAtTail(5);
    list.printList(); // Output: 3 2 1 4 5

    // Insert at index
    list.insertAtIndex(10, 2); // Insert 10 at index 2
    list.printList();          // Output: 3 2 10 1 4 5

    // Delete operations
    list.deleteAtHead();
    list.printList(); // Output: 2 10 1 4 5

    list.deleteAtTail();
    list.printList(); // Output: 2 10 1 4

    list.deleteAtIndex(2); // Delete at index 2
    list.printList();      // Output: 2 10 4

    return 0;
}