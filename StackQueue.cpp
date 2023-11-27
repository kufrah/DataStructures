// // StackQueues.cpp : Defines the exported functions for the DLL application.
// //

// #include "StackQueue.h"


// int ArrayBasedStack::peek() const
// {
// 	if (this->isEmpty())
// 	{
// 		throw "ADT is empty";
// 	}
// 	else
// 	{
// 		//return top of stack
// 	}


// }

// std::string ArrayBasedQueue::peek() const
// {
// 	if (this->isEmpty())
// 	{
// 		throw "ADT is emtpy";
// 	}
// 	else
// 	{
// 		//return front of line
// 	}


// }

#include "StackQueue.h"

// Implementation of ArrayBasedStack
template <typename T>
ArrayBasedStack<T>::ArrayBasedStack() : top(-1), capacity(100) {
    stack = new T[capacity];
}

template <typename T>
ArrayBasedStack<T>::~ArrayBasedStack() {
    delete[] stack;
}

template <typename T>
bool ArrayBasedStack<T>::isEmpty() const {
    return top == -1;
}

template <typename T>
bool ArrayBasedStack<T>::push(const T& val) {
    if (top == capacity - 1)
        return false;

    stack[++top] = val;
    return true;
}

template <typename T>
bool ArrayBasedStack<T>::pop() {
    if (isEmpty())
        return false;

    --top;
    return true;
}

template <typename T>
T ArrayBasedStack<T>::peek() const {
    if (isEmpty())
        throw "ADT is empty";
    else
        return stack[top];
}

template <typename T>
std::string ArrayBasedStack<T>::toString() const {
    // TODO: Implement the string representation of the stack
    return "";
}

// Implementation of ArrayBasedQueue

template <typename T>
ArrayBasedQueue<T>::ArrayBasedQueue() : front(0), rear(-1), capacity(100) {
    queue = new T[capacity];
}

template <typename T>
ArrayBasedQueue<T>::~ArrayBasedQueue() {
    delete[] queue;
}

template <typename T>
bool ArrayBasedQueue<T>::isEmpty() const {
    return rear < front;
}

template <typename T>
bool ArrayBasedQueue<T>::enQueue(const T& val) {
    if (rear >= capacity - 1)
        return false;

    queue[++rear] = val;
    return true;
}

template <typename T>
bool ArrayBasedQueue<T>::deQueue() {
    if (isEmpty())
        return false;

    ++front;
    return true;
}

template <typename T>
T ArrayBasedQueue<T>::peek() const {
    if (isEmpty())
        throw "ADT is empty";
    else
        return queue[front];
}

template <typename T>
std::string ArrayBasedQueue<T>::toString() const {
    // TODO: Implement the string representation of the queue
    return "";
}

// Explicit instantiation for int (you can add more instantiations for other types if needed)
template class ArrayBasedStack<int>;
template class ArrayBasedQueue<int>;