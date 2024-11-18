#include <stdio.h>

int main() {
    int detik_input;
    int hari, jam, menit, detik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik_input);

    hari = detik_input / 86400;              
    jam = (detik_input % 86400) / 3600;      
    menit = (detik_input % 3600) / 60;       
    detik = detik_input % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}
