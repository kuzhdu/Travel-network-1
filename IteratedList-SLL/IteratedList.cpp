//
// Created by Suciu Patrick on 2019-04-06.
//

#include "IteratedList.h"
#include <set>

IteratedList::IteratedList(){
    this->it = new ListIterator(&this->list);
}

int IteratedList::size() const {
    Node *head = this->list.getHead();
    int cnt = 0