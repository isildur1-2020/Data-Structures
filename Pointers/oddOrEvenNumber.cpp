#include <iostream>
using namespace std;

/*
** Check if a number is odd or even with pointers
*/

int main()
{
    int num, *dir_num;

    cout << "Please enter a number: ";
    cin >> num;

    dir_num = &num;

    if (*dir_num % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    return 0;
}