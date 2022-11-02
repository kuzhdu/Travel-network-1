class Bag:
	def __init__(self):
		self.__elems = []

	def add(self, e): #complexity O(Unique numbers)
		ok = False
		for set in self.__elems:
			if set[0] == e:
				ok = True
		