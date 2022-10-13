
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