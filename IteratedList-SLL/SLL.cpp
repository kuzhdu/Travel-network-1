
//
// Created by Suciu Patrick on 2019-04-06.
//

#include "SLL.h"
#include "ListIterator.h"
#include <unistd.h>

SLL::SLL()
{
    this->head = nullptr;
}

SLL::SLL(Node *head)
{
    this->head = head;
}
bool SLL::search(TElem e) const
{
    Node *current = this->head;

    if (current == nullptr)
        return false;
    while (current->getNext() != nullptr && current->getElement() != e)
        current = current->getNext();
    return current->getElement() == e;
}

void SLL::insertFirst(TElem e)
{
    Node *newNode;
    newNode = new Node(e);

    newNode->setNext(this->head);
    this->head = newNode;
}

void SLL::insertAfter(Node *current, TElem e)
{
    Node *newNode;