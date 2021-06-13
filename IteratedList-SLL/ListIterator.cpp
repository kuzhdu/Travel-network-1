//
// Created by Suciu Patrick on 2019-04-06.
//

#include "ListIterator.h"
#include "IteratedList.h"

ListIterator::ListIterator(const SLL *list)
{
    this->list = list;
    this->current = list->getHead();
}

void ListIterator::first(