#!/usr/bin/python3
a = "Python is cool"
print(a[7:-3])

print("""
Usage: thingy [OPTIONS]
		-h                        Display this usage message
		-H hostname               Hostname to connect to
""")


for n in range(2, 10):

	for x in range(2, n):

		if n % x == 0:

			print(n, 'equals', x, '*', n//x)

			break

	else:

		# loop fell through without finding a factor

		print(n, 'is a prime number')
