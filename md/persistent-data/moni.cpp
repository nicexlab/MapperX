#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[1100000][30], b[30];

const int SIZE = 1024 * 1024;

int main(){
    srand(0);
    memset(b, 0, sizeof(b));
for (int times = 0; times < 100; times++) {
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 1024; i++) {
        int x = rand() % SIZE;
        for (int j = 0; j <= 20; j++)
            a[x >> j][j] = 1;
    }

    for (int i = 0; i < 512; i++) {
        int x = rand() % SIZE;
        for (int j = 0; j <= 20; j++) {
            for (int k = 0; k < 2; k++)
                a[(x + k) >> j][j] = 1;
        }
    }

    for (int i = 0; i < 256; i++) {
        int x = rand() % SIZE;
        for (int j = 0; j <= 20; j++) {
            for (int k = 0; k < 4; k++)
                a[(x + k) >> j][j] = 1;
        }
    }

    for (int i = 0; i <= 20; i++) {
        for (int j = 0; j < SIZE; j++)
            if (a[j][i])
                b[i]++;
       
    }
} 
    for (int i = 0; i <= 20; i++) 
        printf("layer %d has %.3f dirty, need write %.3f\n", 20 - i, float(b[i]) / 100, float(b[i] << i) / 100);
    return 0;

}