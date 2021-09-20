/*
** POP
** 1. Create an auxiliary variable of type Node to point to the "top".
** 2. OPTIONALLY YOU CAN SAVE THE DATA THAT WAS THERE IN THE VARIABLE aux->data.
** 3. We make the "top" point to aux->nextNode.
** 4. Delete the auxiliary variable.
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

void pop(Node *&, int &);

int main()
{
    int savedData;
    Node *top = nullptr;

    pop(top, savedData);

    return 0;
}

void pop(Node *&top, int &savedData)
{
    Node *aux = top;
    savedData = aux->data;
    top = aux->nextNode;
    delete aux;
}