
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
        list.addToEnd(i);
        if (i <= 50) {
            it2.next();
        }
        it.next();
        assert(it.getCurrent() == i);
    }
    assert(it2.getCurrent() == 50);
    assert(list.size() == 101);
    assert(it.valid());
    it.next();
    assert(!it.valid());
    try {
        list.getElement(it);
        assert(false);
    }
    catch (std::exception &) {
        assert(true);
    }

    ListIterator it3 = list.search(50);
    assert(it3.valid());
    assert(it3.getCurrent() == 50);
    TElem old = list.setElement(it3, 51);