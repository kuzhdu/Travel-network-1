#pragma once
#include "Node.h"

class ListIterator;

class SLL
{
private:
    Node *head;
public:
    //constructor with head set to nullptr
    SLL();

    //constructor with head set to given node
    SLL(Node *head);

    //searches for an element, returns true if found, otherwise false
    bool search(TElem e) const;

    //inserts an element to the beginning of the list
    void insertFirst(TElem e);

    //inserts an element after a given node
    void insertAfter(Node *current, TElem e);

    //inserts an element at a given position
    //throws an excepti