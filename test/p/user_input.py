#!/usr/bin/python3
num1, num2 = input("Enter 2 numbers: ").split()

# type casting
num1 = int(num1)
num2 = int(num2)

# sum
sum = num1 + num2

# difference
dif = num1 - num2

# product
prd = num1 * num2

# modulus
mod = num1 % num2


print("{num1} + {num2} = {sum}".format(num1, num2, sum))
