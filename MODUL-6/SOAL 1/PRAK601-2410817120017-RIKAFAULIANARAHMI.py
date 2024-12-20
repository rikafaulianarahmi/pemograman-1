baris, kolom = map(int, input().split())

angka = list(map(int, input().split()))

matriks = [[0 for _ in range(kolom)] for _ in range(baris)]

index = 0
for i in range(baris):
    for j in range(kolom):
        matriks[i][j] = angka[index]
        index += 1

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print() 