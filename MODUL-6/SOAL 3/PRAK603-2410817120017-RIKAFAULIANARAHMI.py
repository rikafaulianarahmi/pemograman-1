n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    matriks1 = list(map(int, input().split()))

    matriks2 = list(map(int, input().split()))

    if len(matriks1) != n2 or len(matriks2) != n2:
        print("Jumlah tidak sama")
    else:
        hasil = [matriks1[i] * matriks2[i] for i in range(n2)]

        print(" ".join(map(str, hasil)))
