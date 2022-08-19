#include "SortedMultiMap.h"
#include "SMMIterator.h"
#include <unistd.h>
#include <iostream>

SortedMultiMap::SortedMultiMap(Relation r) {
    this->relation = r;
    this->da = new DynamicArray(100);
}

vector<TValue> SortedMultiMap::search(TKey c) const {
    int index = 0;
    vector<int> vec;
    SMMIterator it = this->da->iterator();
    it.first();
    while (it.valid())
    {
        TElem current = it.ge