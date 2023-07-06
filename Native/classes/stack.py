class Stack:
    def __init__(self) -> None:
        self.stk = []
        self.top = 0
    
    def push(self, v:any):
        self.stk.append(v)
        self.top += 1

    def pop(self):
        self.stk.pop()
        self.top -= 1