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
    bool isUnique();
    // verifies if the list is empty
    bool isEmpty() const;

    // returns the first position from the list
    ListIterator first() const;

    // returns the element from the given position
    //throws an exception if the position is not valid
    TElem getElement(ListIterator pos) const;

    // changes the element from the current position to the given one.
    //returns the old value from the position
    //throws exception if the position is not valid
    TElem setElement(ListIterator pos, TElem e);

    // adds a new element to the end of the list
    void addToEnd(TElem e);

    //adds a new element to a given position
    //after addition, pos points to the newly added element
    //throws an exception if pos is not valid
    void addToPosition(ListIterator& pos, TElem e);

  