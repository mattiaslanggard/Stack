#ifndef STACK_H
#define STACK_H
#include "Node.h"

template <typename T>
class Stack
{
public:
    Stack();
    bool IsEmpty();
    T Top();
    void Push(T val);
    void Pop();
    bool ReplaceFirstValue(T val, T val1);
    bool IsExistingValue(T val);
private:
    int m_count;
    Node<T>* m_top;
};
#endif // STACK_H
