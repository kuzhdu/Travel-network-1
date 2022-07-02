
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
        assert(sm.search(i) == i + 1);
    }
    for (int i = cMin - intervalDim; i < cMin; i++) {
        assert(sm.search(i) == NULL_TVALUE);
    }
    for (int i = cMax + 1; i < cMax + intervalDim; i++) {
        assert(sm.search(i) == NULL_TVALUE);
    }
}

void testSearch() {
    testSearch(increasing);
    testSearch(decreasing);
}

vector<int> keysInRandomOrder(int cMin, int cMax) {
    vector<int> keys;
    for (int c = cMin; c <= cMax; c++) {
        keys.push_back(c);
    }
    int n = keys.size();
    for (int i = 0; i < n - 1; i++) {
        int j = i + rand() % (n - i);
        swap(keys[i], keys[j]);
    }
    return keys;
}

void populateSMEmpty(SortedMap& sm, int cMin, int cMax) {
    vector<int> keys = keysInRandomOrder(cMin, cMax);
    int n = keys.size();
    for (int i = 0; i < n; i++) {
        assert(sm.add(keys[i], keys[i]) == NULL_TVALUE);
    }
}

void rePopulateSMShift(SortedMap& sm, int cMin, int cMax, int shift) {
    vector<int> keys = keysInRandomOrder(cMin, cMax);
    int n = keys.size();
    for (int i = 0; i < n; i++) {
        assert(sm.add(keys[i], keys[i] - shift) == keys[i]);
    }
}

void populateSMShift(SortedMap& sm, int cMin, int cMax, int shift) {
    vector<int> keys = keysInRandomOrder(cMin, cMax);
    int n = keys.size();
    for (int i = 0; i < n; i++) {
        sm.add(keys[i], keys[i] - shift);
    }
}

void testAddAndSearch(Relation r) {