detik_input = int(input("Masukkan jumlah detik: "))

hari = detik_input // 86400             
jam = (detik_input % 86400) // 3600     
menit = (detik_input % 3600) // 60      
detik = detik_input % 60

if hari > 0:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik:02}")
