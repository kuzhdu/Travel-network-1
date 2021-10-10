
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
