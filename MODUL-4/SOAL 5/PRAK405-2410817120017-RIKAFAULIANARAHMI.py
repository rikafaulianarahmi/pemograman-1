n, kelipatan = map(int, input().split())
total = 0

for i in range(1, n + 1):
    baris_total = 0
    for j in range(i, 0, -1):
        baris_total += j * kelipatan
        print(f"({j} * {kelipatan})", end=" ")
        if j > 1:
            print("+ ", end="")
    print(f"= {baris_total}")
    total += baris_total

print(total)