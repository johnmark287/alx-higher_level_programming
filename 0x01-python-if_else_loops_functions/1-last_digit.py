#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
temp = number
number = temp % 10
if temp < 0:
    temp = temp * -1
    number = (temp % 10) * -1
    temp = temp * -1
if number > 5:
    print(f"Last digit of {temp} is {number} and is greater than 5")
elif number == 0:
    print(f"Last digit of {temp} is {number} and is 0")
else:
    print(f"Last digit of {temp} is {number} and is less than 6 and not 0")
