
#include <iostream>
#include <unistd.h>
#include "SortedMultiMap/ShortTest.h"
//#include "SortedMultiMap/ExtendedTest.h"
#include "SMMIterator.h"
#include "SortedMultiMap.h"
#include <vector>

bool asc(TKey c1, TKey c2) {
    if (c1 <= c2) {
        return true;
    } else {
        return false;
    }
}

bool desc(TKey c1, TKey c2) {
    if (c1 >= c2) {
        return true;
    } else {
        return false;
    }
}

void testCreate() {
    SortedMultiMap smm = SortedMultiMap(asc);
    assert(smm.size() == 0);
    assert(smm.isEmpty());

    for (int i = 0; i < 10; i++) {
        vector<TValue> v= smm.search(i);
        assert(v.size()==0);
    }

    for (int i = -10; i < 10; i++) {
        vector<TValue> v= smm.search(i);
        assert(v.size()==0);
    }
}

void testSearch(Relation r) {
    SortedMultiMap smm = SortedMultiMap(r);
    int kMin = 0;
    int kMax = 10;
    for (int i = kMin; i <= kMax; i++) {
        smm.add(i, i + 1);
        smm.add(i, i + 2);
    }
    int intervalDim = 10;
    for (int i = kMin; i <= kMax; i++) {