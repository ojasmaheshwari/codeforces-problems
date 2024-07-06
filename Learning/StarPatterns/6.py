for i in range(1,5):
	for j in range(1,8):
		mid = 7 // 2
		if j <= mid and j >= i or j >= mid + 1 and j <= 7 - i + 1:
			print('*', end='')
		else:
			print(' ', end='')
	print()
