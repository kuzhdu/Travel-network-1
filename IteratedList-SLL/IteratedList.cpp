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
    int cnt = 0;

    while (head != nullptr)
    {
        head = head->getNext();
        cnt++;
    }
    //std::cout << cnt;
    return cnt;
}

//all the elements are unique

bool IteratedList::isEmpty() const {
    return this->size() == 0;
}



ListItera