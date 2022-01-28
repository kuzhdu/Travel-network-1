
#include <iostream>
#include "SLL.h"
#include "ListIterator.h"
#include "IteratedList.h"
#include <unistd.h>

void testAllExtended2() {
    IteratedList list = IteratedList();
    assert(list.isEmpty());