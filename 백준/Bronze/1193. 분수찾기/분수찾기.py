
X = int(input())
line = 1
while(X > line):
    X -= line
    line += 1
if(line % 2 != 0):
    a = line - X +1
    b = X
else:
    a = X
    b = line - X + 1
print('%d/%d'%(a, b))