n = int(input())
a = list(map(int, input().split()))

for i in range(n):
    min_index = i
    for j in range(i, n):
        if a[j] < a[min_index]:
            min_index = j
    a[i], a[min_index] = a[min_index], a[i]
    
for i in range(n):
    print(a[i], end=' ')
