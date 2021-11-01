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

    //searches for an elem