class Calculator:
    def sum(self,n1=None,n2=None,n3=None):
        if n3:
            return n1+n2+n3
        else:
            return n1+ n2
        

c1 = Calculator()

print(c1.sum(1,2,3))
print(c1.sum(1,2))
