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
    return(input().split())
           
"""
TIME LIMIT in python but this idea works in C++
n = inp()
v = inlt()
d = {}
for i in range(len(v)):
    d[v[i]] = None
print(len(d))
"""

n = inp()
v = invr()

print(len(set(v)))

