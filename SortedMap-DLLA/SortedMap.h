
//
// Created by Suciu Patrick on 2019-04-21.
//

#ifndef LABORATORY4_SORTEDMAP_H
#define LABORATORY4_SORTEDMAP_H

#pragma once

#include <utility>
#include "DLLAIterator.h"
typedef int TKey;

typedef int TValue;
typedef std::pair<TKey, TValue> TElem;

#define NULL_TVALUE -1
typedef bool(*Relation)(TKey, TKey);
typedef DLLAIterator SMIterator;

class SortedMap {