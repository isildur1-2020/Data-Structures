/*
** QUEUES
** FIFO -> First input, first output
** 1. Crear espacio en memoria para almacenar un Nodo.
** 2. Asignar ese nuevo Nodo al dato que queremos insertar.
** 3. Si no hay ningun Nodo creado entonces el principio y el fin apuntan
**    al nuevo Nodo
    ->Si no entonces:
    ... El último tiene que apuntar al nuevo Nodo. Luego, el nuevo nodo
    ... apunta a nullptr y, por último el nuevo Nodo se convierte en el Nodo final
** 
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

void push(Node *&, Node *&, int &);
void showQueue(Node *&);

int main()
{
    Node *start = nullptr;
    Node *end = nullptr;
    int data = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nPlease enter a number to insert in a Queue: ";
        cin >> data;
        push(start, end, data);
    }
    showQueue(start);

    return 0;
}

void push(Node *&start, Node *&end, int &data)
{
    Node *newNode = new Node();
    newNode->data = data;
    if (start == nullptr)
    {
        start = newNode;
        start->nextNode = nullptr;
        end = start;
    }
    else
    {
        end->nextNode = newNode;
        newNode->nextNode = nullptr;
        end = newNode;
    }
    cout << "\nNumber " << data << " insert succesfully!";
}

void showQueue(Node *&start)
{
    Node *auxNode = start;
    cout << "\nQUEUE:";
    while (auxNode != nullptr)
    {
        cout << auxNode->data;
        if (auxNode->nextNode == nullptr)
            cout << " .\n";
        else
            cout << " --> ";
        auxNode = auxNode->nextNode;
    }
}
