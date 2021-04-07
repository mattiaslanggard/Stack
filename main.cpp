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

    // list the elements of the stack
    while (!numberStack.IsEmpty())
    {
        // Get the top element
        cout << numberStack.Top() << " - ";

        // Remove the top element
        numberStack.Pop();
    }
    cout << "nullptr" << m_count << endl;

    return 0;
}