import math

def hitung_segitiga(a, b):
    # Menghitung alas menggunakan teorema Pythagoras
    c = int(math.sqrt(b**2 - a**2))
    
    # Menghitung keliling
    keliling = a + b + c
    
    # Menghitung luas
    luas = int(0.5 * c * a)
    
    # Menampilkan hasil tanpa angka desimal
    print(f"Alas = {c} cm")
    print(f"Tinggi = {a} cm")
    print(f"Keliling = {keliling} cm")
    print(f"Luas = {luas} cm^2")

# Input dari pengguna
a = int(input("Masukkan panjang A (tinggi): "))
b = int(input("Masukkan panjang B (sisi miring): "))

# Memanggil fungsi untuk menghitung segitiga
hitung_segitiga(a, b)
