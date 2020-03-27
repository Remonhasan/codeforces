t = int(input())

def smallfact(n):
    if n==1:
        return 1
    return n*smallfact(n-1)

for i in range(t):
    n=int(input())
    print(smallfact(n))

