/* Nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
Deskripsi : membuat searchinng array dengan boolean
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"
C:\Users\jenoluvollie\OneDrive\Documents\PRAKTIKUM ALPRO ARGH\cek cek serch\main.c
int main()
{
    // Kamus Lokal
    int arr[] = { 9, 30, 12, 3, 6, 23};
    int x =
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;
    bool found;

    // Algoritma
    printf("Masukan x yang dicari: ");
    scanf("%d", &x);

    //SEQSearchX1(arr, n, &ix, x);
    //SEQSearchX2(arr, n, x, &ix, &found);

    BinSearch1(arr, n, x, &ix);
    (ix == -1)
        ? printf("Elemen tidak ditemukan")
        : printf("Elemen ditemukan pada index ke-%d", ix);

    return 0;
}
