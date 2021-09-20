/*
** Agregar números enteros a una pila, hasta que el usuario lo decida.
** Mostrar todos los números introducidos en la pila.
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

void showMenu(int &);
void push(Node *&, int &);
void pop(Node *&, int &, int &);
void showStack(Node *&);

int main()
{
    int data = 0;
    int option = 0;
    int savedData = 0;
    Node *top = nullptr;

    while (option != 4)
    {
        showMenu(option);
        switch (option)
        {
        case 1:
            push(top, data);
            break;
        case 2:
            pop(top, data, savedData);
            break;
        case 3:
            showStack(top);
            break;
        case 4:
            cout << "See you later...\n";
            break;

        default:
            cout
                << "invalid option.\n";
            break;
        }
    }

    return 0;
}

void showMenu(int &option)
{
    cout << "\n\n==========STACK PROGRAM==========\n";
    cout << "1. Add number to Stack.\n";
    cout << "2. Remove number to Stack.\n";
    cout << "3. Show the Stack\n";
    cout << "4. Exit\n\n";
    cout << "Please enter your option: ";
    cin >> option;
}

void push(Node *&top, int &data)
{
    cout << "\n1. ADD DATA TO STACK\n";
    cout << "Please enter a number: ";
    cin >> data;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->nextNode = top;
    top = newNode;
    cout << "Number " << data << " successfullly added to the stack!\n";
}

void pop(Node *&top, int &data, int &savedData)
{
    cout << "\n1. REMOVE DATA TO STACK\n";
    cout << "Please enter the amount of information to delete: ";
    cin >> data;
    for (int i = 0; i < data; i++)
    {
        if (top == nullptr)
        {
            cout << "All items removed!\n";
            return;
        }
        Node *aux = top;
        savedData = aux->data;
        top = aux->nextNode;
        delete aux;
        cout << "Number " << savedData << " removed successfully form stack!\n";
    }
}

void showStack(Node *&top)
{
    cout << "\n==========CURRENT STACK==========\n";
    Node *aux = top;
    while (aux != nullptr)
    {
        cout << aux->data;
        aux = aux->nextNode;
        if (aux != nullptr)
            cout << " --> ";
        else
            cout << " .";
    }
}