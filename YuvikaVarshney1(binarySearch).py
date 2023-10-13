def search(nums: [int], target: int):
    # write your code logic !!
    n=len(nums)
    l=0
    h=n-1
    while l<=h:
        m=l+ (h-l)//2
        if nums[m]==target:
            return m
        elif nums[m]>target:
            h=m-1
        else:
            l=m+1
    return -1    
n= int (input())
arr = list(map(int,input().strip().split()))[:n]
target =int (input())
print (search(arr, target))
