
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
