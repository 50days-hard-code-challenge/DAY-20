def calcGDC(n:int, m: int) -> int:
    # Write your code here
    #Euclidean Theorem
    if m==0:
        return n
    else:
        if(n<m):
            (n,m)=(m,n)
        return calcGDC(m,n%m)
    """r=min([n,m])
    hcf=1
    for i in range(r+1,1,-1):
        if n%i==0 and m%i==0:
            hcf=i
            break
    return hcf"""

    pass
