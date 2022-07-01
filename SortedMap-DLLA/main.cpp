
#include <iostream>
#include <unistd.h>
#include "SortedMap.h"
#include <assert.h>
#include <exception>
#include <vector>
using namespace std;


bool increasing(TKey c1, TKey c2) {
    if (c1 <= c2) {
        return true;
    } else {
        return false;
    }
}

bool decreasing(TKey c1, TKey c2) {
    if (c1 >= c2) {
        return true;
    } else {
        return false;
    }
}

void testCreate() {
    SortedMap sm(increasing);
    assert(sm.size() == 0);
    assert(sm.isEmpty());

    SMIterator it = sm.iterator();
    it.first();
    assert(!it.valid());
    try {
        it.next();
        assert(false);
    }
    catch (exception&) {
        assert(true);
    }
    try {
        it.getCurrent();
        assert(false);
    }
    catch (exception&) {
        assert(true);
    }

    for (int i = 0; i < 10; i++) {
        assert(sm.search(i) == NULL_TVALUE);
    }

    for (int i = -10; i < 10; i++) {
        assert(sm.remove(i) == NULL_TVALUE);
    }
}

void testSearch(Relation r) {
    SortedMap sm(r);
    int cMin = 0;
    int cMax = 10;
    try {
        for (int i = cMin; i <= cMax; i++) {
            sm.add(i, i + 1);
        }
        assert(true);
    } catch (exception&) {
        assert(false);
    }
    int intervalDim = 10;
    for (int i = cMin; i <= cMax; i++) {