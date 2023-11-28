#!/usr/bin/python3
def uppercase(str):
    for i in str:
        num = ord(i)
        if num >= 97 and num <= 122:
            i = chr(ord(i) - (ord('a') - ord('A')))
        print("{:s}".format(i), end="")
    print("")
