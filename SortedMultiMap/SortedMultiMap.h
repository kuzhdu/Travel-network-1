
#pragma once

#include <utility>
#include <vector>
#include "DynamicArray.h"

typedef int TKey;
typedef int TValue;
typedef std::pair<TKey, TValue> TElem;

using namespace std;

typedef bool(*Relation)(TKey, TKey);

class SortedMultiMap {
private: