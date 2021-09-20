/*
** LIFO: Last input, first output
** INSERT ITEMS INTO A STACK
** 1. Create memory space to store a Node.
** 2. Load the value into the newNode->data.
** 3. Load the value newNode->nextNode with de "top"
** 4. Assign the created node to "top"
*/
#include <iostream>
using namespace std;

// 'data' to save a int number,
// 'nextNode' to point the next struct Node.
struct Node
{
    int data;
    Node *nextNode;
};

void push(Node *&, int);

int main()
{
    Node *top = nullptr;

    push(top, 6);

    return 0;
}

void push(Node *&top, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->nextNode = top;
    top = newNode;
}
