def match(s:str):
	for i in s:
		for j in s[i:]:
			if i==j:
				s.replace(j,'')
match("AABAAB")