def newyearchaos(q:list):
	place = []
	ogplace = [1,2,3,4,5]
	for k in q:
		place.append(k)

	# check if the place is more than 2
	for i in place:
		for j in ogplace:
			# check if the ith and jth place is greater than 2
			if i-j<2:
				print("Too chaotic")

newyearchaos([2,1,5,3,4])