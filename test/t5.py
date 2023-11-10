class Test:
    name = "John"
    id = 23
    
    def __init__(self, u_name, u_id):
        id = u_id
        name = u_name
        
    def __str__(self) -> str:
        pass
u = Test("Quan", 17)
print(u)