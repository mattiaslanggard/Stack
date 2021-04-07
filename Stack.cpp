#include "Stack.h"
template class Stack<int>;
template class Stack<float>;

template <typename T>
Stack<T>::Stack()
    : m_count(0), m_top(nullptr)
{
    // incoming
}

template <typename T>
bool Stack<T>::IsEmpty()
{
    // return TRUE if there are no items otherwise, return FALSE
    return m_count <= 0;
}

template <typename T>
T Stack<T>::Top()
{
    // Just return the value of m_top node
    return m_top->Value;
}

template <typename T>
void Stack<T>::Push(T val)
{
    // Create a new Node
    Node<T>* node = new Node<T>(val);

    // The Next pointer of this new node will point to current m_top node
    node->Next = m_top;

    // The new Node now becomes the m_top node
    m_top = node;

    // One item is added
    m_count++;
}

template <typename T>
void Stack<T>::Pop()
{
    // Do nothing if Stack is empty
    if (IsEmpty())
        return;

    // Prepare the current m_top to remove
    Node<T>* node = m_top;

    // The new m_top node will be the Next pointer of the current m_top node
    m_top = m_top->Next;

    // Now it's safe to remove the first element
    delete node;

    // One item is removed
    m_count--;
}