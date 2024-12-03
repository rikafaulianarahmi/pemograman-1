angka1, angka2 = map(int, input().split())

if angka1 < angka2:
    i, j = angka1, angka2
    while i <= angka2 and j >= angka1:
        print(f"{i} {j}", end=" - " if i < angka2 and j > angka1 else "")
        i += 1
        j -= 1
else:
    i, j = angka1, angka2
    while i >= angka2 and j <= angka1:
        print(f"{i} {j}", end=" - " if i > angka2 and j < angka1 else "")
        i -= 1
        j += 1
print()
