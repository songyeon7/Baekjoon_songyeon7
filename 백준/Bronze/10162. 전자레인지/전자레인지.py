T = int(input())
Sec = T % 60
Min = (T-Sec) / 60
if(Sec % 10 == 0):
    C = int(Sec/10)
    if(Min / 5 >0):
        B = int(Min % 5)
        A = int((Min-B) / 5)
    if(Min / 5 == 0):
        A = 0
        B = int(Min)
    print(A, B, C)
if(Sec % 10 != 0):
    print(-1)
