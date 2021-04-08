#include <iostream>
#include "Stack.h"
#include "node.h"
using namespace std;

int main()
{
    Stack<int> numberStack = Stack<int>();

    // Store several numbers to the stack
    numberStack.Push(32);
    numberStack.Push(47);
    numberStack.Push(18);
    numberStack.Push(59);
    numberStack.Push(88);
    numberStack.Push(91);


    cout << "Does the value of 59 exist in the stack?" << endl;
    bool result = false;
    result = numberStack.IsExistingValue(59);
    if (result == true)
    {
        cout << "The value 59 exists in the stack!" << endl;
    }
    else
    {
        cout << "The value 59 does NOT exist in the stack!" << endl;
    }
    cout << "Replace the first element with the value of 59 to 44." << endl;
    result = false;
    result = numberStack.ReplaceFirstValue(59, 44);
    if (result == true)
    {
        cout << "The value 59 replaced with 44!" << endl;
    }
    else
    {
        cout << "The value 59 did NOT exist in the stack!" << endl;
    }

    // list the elements of the stack
    while (!numberStack.IsEmpty())
    {
        // Get the top element
        cout << numberStack.Top() << " - ";

        // Remove the top element
        numberStack.Pop();
    }
    cout << "nullptr" << endl;
    return 0;
}