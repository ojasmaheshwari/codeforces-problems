# Program to check if a given string is a subsequence of another
# A subsequence is just an escaped match

def subseq(a, b) -> bool:
	# checks if b is a subsequence of a
	i = 0
	chars_fnd = 0
	
	for j in range(len(a)):
		if i < len(b) and b[i] == a[j]:
			chars_fnd += 1
			i += 1
		if chars_fnd == len(b):
			return True
	return False

a = input()
b = input()

print("len(a)", len(a), "len(b)", len(b))

# subseq(a, b) should return True

print(subseq(a,b))
