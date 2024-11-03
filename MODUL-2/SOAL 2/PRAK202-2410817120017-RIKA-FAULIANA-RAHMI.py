# Fungsi untuk format angka sesuai dengan input
def format_angka(angka, is_result=False):
    if is_result:
        return f"{angka:.2f}"  # Menampilkan hasil dengan dua angka di belakang koma
    elif angka.is_integer():
        return f"{int(angka)}"  # Menghilangkan ".00" jika bilangan bulat
    elif (angka * 10).is_integer():
        # Jika hanya memerlukan satu angka desimal, tampilkan dengan satu angka di belakang koma
        return f"{angka:.1f}"
    else:
        return f"{angka:.2f}"   # Jika memiliki lebih dari satu angka desimal, tampilkan dua angka di belakang koma

# Input nilai pertama
nilai1 = float(input("Masukkan Nilai Pertama: "))

# Input nilai kedua
nilai2 = float(input("Masukkan Nilai Kedua: "))

# Menghitung hasil penjumlahan
hasil = nilai1 + nilai2

# Output dengan format sesuai input, dan hasil selalu dua angka di belakang koma
print(f'Hasil dari penjumlahan nilai pertama "{format_angka(nilai1)}" dan nilai kedua "{format_angka(nilai2)}" adalah "{format_angka(hasil, is_result=True)}"')

