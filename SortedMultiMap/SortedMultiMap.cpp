#include "SortedMultiMap.h"
#include "SMMIterator.h"
#include <unistd.h>
#include <iostream>

SortedMultiMap::SortedMultiMap(Relation r) {
    this->relation = r;
    t