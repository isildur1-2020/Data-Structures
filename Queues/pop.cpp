/*
** QUEUE POP
** 1. Obtener el valor del nodo, para poder guardarlo.
** 2. Crear un nodo auxiliar y asignarle el frente de la cola.
** 3. Eliminar el nodo del frente de la cola,
** PERO: sí solo hay un nodo, hacemos que apunte el principio y el fin
** a nullptr antes de eliminar al auxiliar, es decir, sí principio y fin son iguales.
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

void pop(Node *&, Node *&, int &);

int main()
{
    int num;
    Node *start = nullptr;
    Node *end = nullptr;

    pop(start, end, num);

    return 0;
}

void pop(Node *&start, Node *&end, int &data)
{
    data = start->data;
    Node *auxNode = start;
    if (start == end)
    {
        start = nullptr;
        end = nullptr;
    }
    else
        start = start->nextNode;
    delete auxNode;
}