//
// Created by Suciu Patrick on 2019-04-06.
//

#ifndef LINKED_LIST_ListIterator_H
#define LINKED_LIST_ListIterator_H

#include "SLL.h"

class SortedBag;

class ListIterator
{
private:
    const SLL *list;
    Node *current;
public:
    //constructor
    ListIterator(const SLL *list);

    void first();

    //checks if the iterator is in a valid position
    bool valid() const