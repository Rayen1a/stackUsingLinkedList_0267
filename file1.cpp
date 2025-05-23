#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};
// Stack class
class Stack
{
    private:
    Node *top; // Pointer to the top node of the stack

    public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }
    // Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Aliocate memory for the new node
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. set the next pointer of the new node to 
        top = newNode; // 4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // pop operation: remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack id Empty," << endl;
        }

        Node *temp = top; //  Create a temporary pointer to the top node
        top = top->next; // update the to pointer to the next node
        cout << "Popped value: " << top->data << endl;
        delete temp;
    }

    // Peek/Top operation: retrieve the value of the topmost element withhout romo
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else 
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }

    // isempty operation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // return true if the top pointer is NULL, idicating
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "5. Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;

            case 2:
            if (!stack.isEmpty())
            {
                stack.pop();
            }
            else
            {
                cout << "Stack is empty. Cannot pop" << endl;
            }
            break;

            case 3:
            if (stack.isEmpty())
            {
                stack.peek();
            }
            else
            {
                cout << "Stack is Empty.No top value" << endl;
            }
            break;
        }
    }
}