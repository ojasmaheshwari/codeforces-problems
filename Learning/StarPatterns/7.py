for i in range(1, 5):
	for j in range(1, 8):
		mid = 7 // 2
		if j <= mid + 1 and j <= mid + 2 - i or j > mid + 1 and j >= mid + i:
			print('*', end='')
		else:
			print(' ', end='')
	print()
