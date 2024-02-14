def sumfinder(a,n,k):
    count = 0
    for i in range(0,n):
        for j in range (i + 1,n):
            if a[i] + a[j] == k :
                count += 1
    return count






a= [1,2,5,45]
n = len(a)
k = 6
print("Count of pairs is",
      sumfinder(a, n, k))