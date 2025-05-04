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


k = inp()


for i in range(1, k+1):
    total  = ((i * i) * ((i * i) - 1)) // 2
    attack = 4 * (i - 1) * (i - 2)
    print(total-attack)