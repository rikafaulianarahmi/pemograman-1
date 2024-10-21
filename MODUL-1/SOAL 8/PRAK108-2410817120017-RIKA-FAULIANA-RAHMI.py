import math

# Diketahui
putaran = 5
jarak_tempuh = 14  # dalam kilometer

# Menghitung keliling satu putaran
keliling_satu_putaran = jarak_tempuh / putaran

# Menghitung jari-jari taman
jari_jari = keliling_satu_putaran / (2 * math.pi)

# Output
print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak_tempuh} Kilometer\n")

print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f} Kilometer")
