# Mendefinisikan jumlah pasukan dan jumlah pahlawan
jumlah_pasukan = 958730
jumlah_pahlawan = 5

# Menghitung jumlah pasukan yang harus dikalahkan setiap pahlawan
pasukan_per_pahlawan = jumlah_pasukan // jumlah_pahlawan  # Menggunakan integer division

# Menampilkan hasil
print(f"Jumlah pasukan yang dibawa Yu Zhong = {jumlah_pasukan}")
print(f"Jumlah pahlawan = {jumlah_pahlawan}")
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {pasukan_per_pahlawan} pasukan")
