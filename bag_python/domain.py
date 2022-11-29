class Bag:
	def __init__(self):
		self.__elems = []

	def add(self, e): #complexity O(Unique numbers)
		ok = False
		for set in self.__elems:
			if set[0] == e:
				ok = True
				set[1] += 1

		if ok is False:
			newSet = [e, 1]
			self.__elems.append(newSet)

	def remove(self, e): #complexity O(Unique numbers)
		for index in range(len(self.__elems)):
			set = self.__elems[index]
			if set[0] == e and set[1] > 1:
				set[1] -= 1
				return True
			elif set[0] == e and set[1] == 1:
				self.__elems.pop(index)
				return True
		return False

	def search(self, e): #complexity O(Unique numbers)
		for set in self.__elems:
			if set[0] == e:
				return True
		return False

	def size(self): #complexity theta(Unique numbers)
		cnt = 0
		for set in self.__elems:
			cnt += set[1]
		return cnt

	def nrOccurrences(self, e): #complexity O(Unique numbers)
		for set in self.__elems:
			if set[0] == e:
				return set[1]
		return 0

	def iterator(self): #O(1)
		return BagIterator(self)

	def isEmpty(self):#O(1)
		if len(self.__elems) == 