#include <stdbool.h>

#ifndef SEARCHING_H_INCLUDED
#define SEARCHING_H_INCLUDED

void SEQSearchX1(int T[], int N, int *IX, int X);

void SEQSearchX2(int T[], int N, int X, int*IX, bool *Found);

void BinSearch1(int T[], int N, int X, int *IX);
#endif // SEARCHING_H_INCLUDED
