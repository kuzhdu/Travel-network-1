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



ListIterator IteratedList::first() const {
    this->it->first();
    return *this->it;
}

TElem IteratedList::getElement(ListIterator pos) const {
    return pos.getCurrent();
}

TElem IteratedList::setElement(ListIterator pos, TElem e) {
    Node *current = this->list.getHead();
    TElem aux;
    while (current != nullptr)
    {
        if (current->getElement()== pos.getCurrent())
        {
            aux = current->getElement();
            current->setElem(e);
            return aux;
        }
        current = current->getNext();
    }

}

void IteratedList::addToEnd(TElem e) {

    this->it->first();
    if (this-it->valid() == nullptr)
        this->list.insertFirst(e);
    else {

        this->list.insertPosition(this->size(), e);
        ListIterator newIt = ListIterator(&this->list);

        newIt.first();
        /*
        while (newIt.valid())
        {
            std::cout << newIt.getCurrent();
            newIt.next();
        }
        std::cout << '\n';*/
    }
}

void IteratedList::addToPosition(ListIterator &pos, TElem e) {
    Node *current = this->list.getHead();
    TElem aux;

    while (current != nullptr)
    {
        if (current->getElement() == pos.getCurrent()) {
            aux = current->getElement();
            current->setElem(e);
            this->list.insertAfter(current, aux);
        }
        current= current->getNext();
    }
    /*
    int cnt = 0;
    ListIterator *prev;
    this->it->first();
    while (this->it->valid())
    {
        if (this->it->getCurrent() == pos.getCurrent()) {
            this->list.insertPosition(cnt, e);
            //this->it->next();
            break;
        }
        this->it->next();