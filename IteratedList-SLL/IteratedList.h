//
// Created by Suciu Patrick on 2019-04-06.
//

#ifndef LINKED_LIST_ITERATEDLIST_H
#define LINKED_LIST_ITERATEDLIST_H

#include "ListIterator.h"
typedef int TElem;

class IteratedList {

private:
    /*Representation of the IteratedList*/
    SLL list;
    ListIterator *it;
public:
    // constructor
    IteratedList();

    // returns the number of elements from the list
    int size() const;
    bool isUni