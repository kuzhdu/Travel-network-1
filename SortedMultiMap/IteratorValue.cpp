#include "IteratorValue.h"
#include <iostream>
#include <queue>

IteratorValue::IteratorValue(const DynamicArray *c, int key) {
    for (int i = 0; i < c->size(); i++)
        if (c->getElement(i).first == key)
            this