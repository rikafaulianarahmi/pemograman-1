#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas_paralel[10], tempat_tanggal_lahir[50];
    char alamat[100], hobby[50], no_hp[20];

    // Input biodata
    printf("Nama: "); fgets(nama, sizeof(nama), stdin);
    printf("NIM: "); fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel: "); fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    printf("Tempat/Tanggal Lahir : "); fgets(tempat_tanggal_lahir, sizeof(tempat_tanggal_lahir), stdin);
    printf("Alamat: "); fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby: "); fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP: "); fgets(no_hp, sizeof(no_hp), stdin);

    // Output biodata
    printf("Nama                 : %s", nama);
    printf("NIM                  : %s", nim);
    printf("Kelas Paralel        : %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s", tempat_tanggal_lahir);
    printf("Alamat               : %s", alamat);
    printf("Hobby                : %s", hobby);
    printf("No. HP               : %s", no_hp);

    return 0;
}
