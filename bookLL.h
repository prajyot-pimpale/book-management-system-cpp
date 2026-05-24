#ifndef BOOKLL_H
#define BOOKLL_H

#include <iostream>
#include <fstream>
#include "bookManagementSystem.h"
#include "node.cpp"
using namespace std;

template <class T>
class LinkedList
{
private:
    Node<T>* start;
public:
    LinkedList();
    void insertPos(T& data, int pos);
    void deletePos(int pos);
    void display();
    ~LinkedList();
};

#endif
