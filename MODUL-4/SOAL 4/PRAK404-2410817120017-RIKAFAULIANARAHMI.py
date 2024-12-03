while True:
    print("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    pilihan = int(input("Masukkan Pilihan: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator RIKAFAULIANARAHMI")
        break
    elif 1 <= pilihan <= 4:
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))

        if pilihan == 1:
            print(f"Hasil Penjumlahan: {a + b:.2f}")
        elif pilihan == 2:
            print(f"Hasil Pengurangan: {a - b:.2f}")
        elif pilihan == 3:
            print(f"Hasil Perkalian: {a * b:.2f}")
        elif pilihan == 4:
            if b != 0:
                print(f"Hasil Pembagian: {a / b:.2f}")
            else:
                print("Error: Pembagian dengan nol tidak valid!")
    else:
        print("Input anda salah, silahkan coba lagi")
