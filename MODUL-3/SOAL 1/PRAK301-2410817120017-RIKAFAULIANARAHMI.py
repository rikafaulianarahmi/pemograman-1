a, b, c = map(int, input("Masukkan 3 angka (dipisahkan spasi): ").split())

if a > b:
  a, b = b, a

if a > c:
  a, c = c, a

if b > c:
  b, c = c, b

print("Angka terurut:", a, b, c)