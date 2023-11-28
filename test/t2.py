
print("Sammy has {} balloons.".format(5))
print("Sammy the {1} has a pet {0}!".format("shark", "pilot fish"))
print("Sammy the {pr} {1} a {0}.".format("shark", "made", pr="pull request"))
print("Sammy ate {0:.3f} percent of a pizza!".format(75.765367))
num = 7
print(f"Sammy ate {num:4} percent of a pizza!")
print("Sammy has {0:<4} red {1:*^16}!".format(5, "balloons"))
print("Sammy ate {0:5.0f} percent of a pizza!".format(75.765367))

for i in range(3, 13):
    print("{:6d} {:6d} {:6d}".format(i, i*i, i*i*i))
for i in range(2, 10):
    print(i)

def num():
    global name
    name = "john"
name = "mark"
    
num()
print(name)
