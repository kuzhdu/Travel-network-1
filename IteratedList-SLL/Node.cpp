//
// Created by Suciu Patrick on 2019-04-06.
//

#include "Node.h"

Node::Node(TElem e)
{
    this->e = e;
    this->next = nullptr;
}

TElem Node::getElement() const
