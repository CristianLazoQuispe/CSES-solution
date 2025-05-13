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

while (n!=1):
    print(n,end=" ")
    if n%2==0:
        n= n//2
    else:
        n = n*3+1
print(1)