
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