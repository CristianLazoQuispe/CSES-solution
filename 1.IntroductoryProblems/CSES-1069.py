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


s = insr()

maxi = 1
cnt  = 1
prev = s[0]
for i in range(1,len(s)):
    if prev== s[i]:
        cnt+=1
        maxi = max(cnt,maxi)
    else:
        cnt=1
    prev = s[i]
print(maxi)

        