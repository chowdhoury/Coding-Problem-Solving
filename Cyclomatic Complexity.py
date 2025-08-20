import ast,textwrap;

class PathVisit(ast.NodeVisitor):
    def __init__(self): self.decisions=0;
    def visit_If(self,n): self.decisions+=1; self.generic_visit(n);
    def visit_For(self,n): self.decisions+=1; self.generic_visit(n);
    def visit_While(self,n): self.decisions+=1; self.generic_visit(n);
    def visit_Try(self,n): self.decisions+=len(n.handlers)+(1 if finalbody else 0); self.generic_visit(n);
    
def cc(code):
    t=ast.parse(code); a=PathVisit(); a.visit(t); return a.decisions+1;

if __name__ =="__main__":
    code=textwrap.dedent('''
        def example(x):
            if x > 0:
                print("Positive!")
            else:
                print("Not Positive!")
            for i in range(3):
                if i % 2 == 0:
                    print(i)
            return x
    ''')
print("Number of Independent Path: ",cc(code));
