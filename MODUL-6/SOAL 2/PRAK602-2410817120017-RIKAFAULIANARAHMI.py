n = int(input())

elemen = list(map(int, input().split()))

output = [elemen[i] * (i + 1) for i in range(n)]
print(" ".join(map(str, output)))

