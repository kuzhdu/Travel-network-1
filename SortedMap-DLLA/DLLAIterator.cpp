
//
// Created by Suciu Patrick on 2019-04-21.
//

#include "SortedMap.h"
#include <unistd.h>
#include <iostream>


//Complexity: theta(1)
DLLAIterator::DLLAIterator(DLLA &toIterate){
    this->toIterate = toIterate;