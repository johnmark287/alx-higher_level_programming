class Test:
    name = "John"
    id = 23
    
    def __init__(self, u_name, u_id):
        self.id = u_id
        self.name = u_name
        
    def __str__(self):
        return f"NAME: {self.name} \nID: {self.id}"
u = Test("Quan", 17)
print(u)