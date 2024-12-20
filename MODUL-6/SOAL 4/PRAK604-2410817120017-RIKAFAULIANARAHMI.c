#include <stdio.h> 
#include <string.h> 
 
int main () { 
    char baris_pertama[50]; 
    char baris_kedua[50]; 
    int jumlah_bintang = 0; 
    int jumlah_pagar = 0; 
 
    scanf(" %[^\n]%*c", &baris_pertama); 
    scanf(" %[^\n]%*c", &baris_kedua); 
    if (strlen(baris_pertama) == strlen(baris_kedua)){ 
        for (int i = 0; i < strlen(baris_pertama); i++) { 
            if (baris_pertama[i] == ' ' && baris_kedua[i] == ' ' ) { 
                printf(" "); 
            } 
            else if (baris_pertama[i] == baris_kedua[i]) { 
                printf("*"); 
                jumlah_bintang++; 
            } 
            else { 
                printf("#"); 
                jumlah_pagar++; 
            } 
        } 
        printf("\n* = %d", jumlah_bintang); 
        printf("\n# = %d", jumlah_pagar); 
        if (jumlah_bintang >= jumlah_pagar) { 
            printf("\nPesan Asli"); 
        } 
        else { 
            printf("\nPesan Palsu"); 
        } 
    } 
    else { 
        printf("Panjang Kalimat berbeda, pesan palsu"); 
    } 
 
    return 0; 
} 