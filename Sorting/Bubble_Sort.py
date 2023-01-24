n = int(input())
a = list(map(int, input().split()))

for i in range(0, n):
    for j in range(0, n - i - 1):
        if a[j] > a[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]
            
for i in range(0, n):
    print(a[i], end=' ')
 
