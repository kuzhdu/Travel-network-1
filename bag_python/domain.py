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

	def remove(self, e): #com