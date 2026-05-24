#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Node
{
private:
    T data;
    Node<T>* next;
public:
    Node(T& data);
    void setData(T& data);
    T& getData();
    void setNext(Node<T>* next);
    Node<T>* getNext();
};

#endif
