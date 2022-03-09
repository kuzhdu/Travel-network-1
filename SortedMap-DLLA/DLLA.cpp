//
// Created by Suciu Patrick on 2019-04-21.
//

#include "DLLAIterator.h"

DLLA::DLLA() {
    this->capacity = 1000;
    this->length = 0;
    this->head = -1;
    this->tail = -1;
    this->firstEmpty = 0;
    this->nodes = new DLLANode[1000];
    for (int i = 0;i < this->capacity;i++)
    {
        if (i != 0)
            this->nodes[i].prev = i - 1;
        else
            this->nodes[i].prev = -1;
        if (i != this->capacity - 1)
            this->nodes[i].next = i + 1;
        else
            th