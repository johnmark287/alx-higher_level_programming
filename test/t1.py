#!/usr/bin/python3
def err(s):
    match s:
        case 400:
            return "Bad request"
        case 404:
            return "Not found"
        case 418:
            return "Not a teapot"
        case 401 | 403 | 402:
            return "Not allowed"
        case _:
            return "sth wrong with net"
        
print(err(500))

class Point:
	def __init__(self, x, y):
		self.x = x
		self.y = y

def where_is(point):
	match point:
		case Point(x = 0, y = 0):
			print("Origin")
		case Point(x = 0, y = y):
			print(f"Y = {y}")
		case Point(x = x, y = 0):
			print(f"X = {x}")
		case Point():
			print("Somewhere else")
		case _:
			print("Not a point")

point = Point(2, 0)

where_is(point)
