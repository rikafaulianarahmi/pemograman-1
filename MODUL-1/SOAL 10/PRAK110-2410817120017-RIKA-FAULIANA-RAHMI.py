import math

# Diketahui
alas = 5
tinggi = 12

# Menghitung sisi C (hipotenusa)
sisiC = math.sqrt((alas ** 2) + (tinggi ** 2))

# Menghitung keliling
keliling = alas + tinggi + sisiC

# Menghitung luas
luas = (alas * tinggi) / 2

# Output
print("Diketahui:")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")

print("Jawab:")
print(f"Sisi A = {alas} cm")
print(f"Sisi B = {tinggi} cm")
print(f"Sisi C = {int(sisiC)} cm")  # Mengubah ke integer
print(f"Keliling = {int(keliling)} cm")  # Mengubah ke integer
print(f"Luas = {int(luas)} cm")  # Mengubah ke integer
