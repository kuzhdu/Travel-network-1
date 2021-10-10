
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

    newNode = new Node(e);

    newNode->setNext(current->getNext());
    current->setNext(newNode);
}

void SLL::insertPosition(int position, TElem e)
{
    Node *current;
    int currentPosition;

    if (position < 0)
        throw std::invalid_argument("Index out ooof range.");
    if (position == 0)
    {
        this->insertFirst(e);
        return;
    }
    currentPosition = 1;
    current = this->head;
    while (current && currentPosition < position)
    {
        currentPosition++;
        current = current->getNext();
    }