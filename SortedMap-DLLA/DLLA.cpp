//
// Created by Suciu Patrick on 2019-04-21.
//

#include "DLLAIterator.h"

DLLA::DLLA() {
    this->capacity = 1000;
    this->length = 0;
    this->head = -1;
    this->tail