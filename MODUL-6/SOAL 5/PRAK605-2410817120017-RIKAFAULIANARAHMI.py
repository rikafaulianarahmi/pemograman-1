n = int(input())

print("Matriks A")
A = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
B = [list(map(int, input().split())) for _ in range(n)]

hasil = [[sum(A[i][k] * B[k][j] for k in range(n)) for j in range(n)] for i in range(n)]

print("Matriks AXB")
for baris in hasil:
    print(" ".join(map(str, baris)))
