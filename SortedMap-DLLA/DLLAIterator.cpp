
//
// Created by Suciu Patrick on 2019-04-21.
//

#include "SortedMap.h"
#include <unistd.h>
#include <iostream>


//Complexity: theta(1)
DLLAIterator::DLLAIterator(DLLA &toIterate){
    this->toIterate = toIterate;
    this->pos = toIterate.head;
}

//Complexity: theta(1)
DLLAIterator::DLLAIterator(SortedMap &map){
    this->toIterate = map.map;
    this->pos = toIterate.head;
}

//Complexity: theta(1)
void DLLAIterator::first() {
    this->pos = this->toIterate.head;
}
//Complexity: theta(1)
bool DLLAIterator::valid() {
    if (this->pos == -1)
        return false;
    return true;
}
//Complexity: theta(1)
void DLLAIterator::next() {
    if (!this->valid())