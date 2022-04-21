#include "Searching.h"
#include <stdio.h>
#include <stdbool.h>

void SEQSearchX1(int T[], int N, int *IX, int X)
{
    // Kamus Lokal
    int i; //indeks pencarian

    // Algoritma
    i = 0;
    while(i < N && T[i] != X){
        i++;
    }
    if (T[i] == X){
        *IX = i;
    }else {
        *IX = -1;
    }

}

void SEQSearchX2(int T[], int N, int X, int*IX, bool *Found)
{
    // Kamus Lokal
    int i;

    // Algoritma
    *Found = false;
    i = 1;

    while(i < N && !*Found) {
        if(T[i] == X) {
            *Found = true;
        }
        else {
            i++;
        }
    }
    if (*Found){
        *IX = i;
    } else {
        *IX = -1;
    }

}

void BinSearch1(int T[], int N, int X, int *IX)
{
    // Kamus Lokal
    int upper, lower, mid;

    // Algoritma
    upper = N-1;
    lower = 0;
    mid = (upper + lower) / 2;

    while (X != T[mid] && lower < upper){
        if(X > T[mid]) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
        mid = (upper + lower) / 2;
    }
    if(X == T[mid]) {
        *IX = mid;
    } else {
        *IX = -1;
    }
}
