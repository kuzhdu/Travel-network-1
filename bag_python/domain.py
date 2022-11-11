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
			elif set[0] == e and set[1] ==