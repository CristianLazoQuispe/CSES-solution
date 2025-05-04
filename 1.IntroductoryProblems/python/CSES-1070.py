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


v = ["4","2","5","3","1"]
n = inp()

if n==1:
    print(1)
elif n<4:
    print("NO SOLUTION")
else:
    if n==4:
        print(3,1,4,2)
    else:
        v = [str(i) for i in range(7,n+1,2)] + v + [str(i) for i in range(6,n+1,2)]
        print(" ".join(v))
        
        