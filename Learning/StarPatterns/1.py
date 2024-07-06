def method_1():
		for i in range(1,5):
			for j in range(1,5):
				if j <= i:
					print("*", end='')
				else:
					print(' ', end='')
			print()

def method_2():
	i = 1
	while i <= 4:
		print('*'*i)
		i += 1

method_2()
