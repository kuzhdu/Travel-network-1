
#include <iostream>
#include "SLL.h"
#include "ListIterator.h"
#include "IteratedList.h"
#include <unistd.h>

void testAllExtended2() {
    IteratedList list = IteratedList();
    assert(list.isEmpty());
    ListIterator it0 = list.first();
    assert(!it0.valid());
    try {
        it0.getCurrent();
        assert(false);
    }
    catch (std::exception &) {
        assert(true);
    }

    list.addToEnd(1);
    assert(list.size() == 1);
    ListIterator it = list.first();
    assert(it.getCurrent() == 1);

    ListIterator it2 = list.first();
    for (int i = 0; i < 100; i++) {