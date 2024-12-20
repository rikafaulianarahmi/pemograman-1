baris_pertama = input() 
baris_kedua = input() 
hasil = "" 
jumlah_bintang = 0 
jumlah_pagar = 0 

if len(baris_pertama) == len(baris_kedua):
    for i in range(len(baris_pertama)):
        if baris_pertama[i] == ' ' and baris_kedua[i] == ' ':
            hasil +=" "
        elif baris_pertama[i] == baris_kedua[i]:
            hasil +="*"
            jumlah_bintang += 1
        else:
            hasil +="#"
            jumlah_pagar += 1
    print(hasil)
    print(f"* = {jumlah_bintang}")
    print(f"# = {jumlah_pagar}")
    if (jumlah_bintang >= jumlah_pagar):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

else:
    print("Panjang Kalimat berbeda, pesan palsu")