import sys
input = sys.stdin.readline

############ ---- Input Functions ---- ############
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))

n = inp()

for i in range(n):
    x,y = inlt()
    if y>x:
        if y%2 == 0:
            v = (y-1)**2 +1
            v += x-1
        else:
            v = y**2
            v -= x-1
    else:
        if x%2==0:
            v = x**2
            v -= y-1
        else:
            v = (x-1)**2+1
            v += y-1
    print(v)
            