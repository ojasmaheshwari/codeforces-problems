take_usr_input = True

if take_usr_input:
	try:
			rows = int(input("Enter number of rows: "))
			cols = int(input("Enter number of cols: "))
	except Exception as e:
		print("Adding default input")
		rows = 4
		cols = 7

for i in range(1, rows + 1):
	for j in range(1, cols + 1):
		mid = cols // 2
		if j < mid + 1 and j <= mid + 1 - i or j >= mid + 1 and j > mid + i:
			print(' ', end='')
		else:
			print('*', end='')
	print()
