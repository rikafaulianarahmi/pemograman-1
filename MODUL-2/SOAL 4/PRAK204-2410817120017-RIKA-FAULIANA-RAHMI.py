def hitung_tabung(r, t):
    pi = 22 / 7
    volume = pi * r**2 * t
    luas = 2 * pi * r * (r + t)
    keliling = 2 * pi * r
    
    # Format hasil dengan 2 angka di belakang koma
    print(f"Volume = {volume:.2f}")
    print(f"Luas = {luas:.2f}")
    print(f"Keliling = {keliling:.2f}")

# Input dari pengguna
r = float(input("Masukkan jari-jari: "))
t = float(input("Masukkan tinggi: "))

# Hitung dan tampilkan hasil
hitung_tabung(r, t)
