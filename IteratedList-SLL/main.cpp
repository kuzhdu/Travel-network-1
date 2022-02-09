
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
    assert(old == 50);
    assert(it3.getCurrent() == it2.getCurrent());
    ListIterator it3_2 = list.search(50);
    assert(!it3_2.valid());
    try {
        list.addToPosition(it3_2, 0);
        assert(false);
    }
    catch (std::exception &) {
        assert(true);
    }
    ListIterator it4 = list.search(99);
    assert(it4.getCurrent() == 99);
    it4.next();
    assert(!it4.valid());
    try {
        it4.next();
        assert(false);
    }
    catch (std::exception &) {
        assert(true);
    }

    ListIterator it3_3 = list.search(51);
    list.addToPosition(it3_3, 150);