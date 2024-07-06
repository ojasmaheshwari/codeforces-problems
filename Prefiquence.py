t = int(input())
ans = []

def solve(a, b, na, nb):
	k = 0
	pre = ''
	pre_len = 0
	for l_a in a:
		pre += l_a
		pre_len += 1
		if subseq(b, pre, nb, pre_len):
			k += 1
			continue
		else:
			break
	ans.append(k)

def subseq(a, b, na, nb) -> bool:
	# checks if b is a subsequence of a
	i = 0
	chars_fnd = 0
	
	for j in range(na):
		if i < nb and b[i] == a[j]:
			chars_fnd += 1
			i += 1
		if chars_fnd == len(b):
			return True
	return False

while t:
	na, nb = map(int, input().split())
	a = input()
	b = input()
	solve(a, b, na, nb)
	t -= 1

for a in ans:
	print(a)
