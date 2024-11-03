# Fungsi untuk melakukan perhitungan
def hitung_ekspresi():
    # Mengambil input dari pengguna untuk variabel
    a = float(input("Masukkan a: "))
    b = float(input("Masukkan b: "))
    i = float(input("Masukkan i: "))
    j = float(input("Masukkan j: "))
    x = float(input("Masukkan x: "))
    y = float(input("Masukkan y: "))

    # Menghitung hasil berdasarkan rumus yang diberikan
    hasil = (((a - b) * i) / j) - x - y

    # Menampilkan hasil dengan tiga angka di belakang koma
    print(f"Hasil: {hasil:.3f}")

# Memanggil fungsi untuk menjalankan perhitungan
hitung_ekspresi()