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
}  