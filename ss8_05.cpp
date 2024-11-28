#include <stdio.h>

int main() {
    
    int mtv[4][4] = {{2,33,4,54},{9,6,12,17},{51,37,1,24},{5,19,28,35}};
     

    int hang = 4; 
    int cot = 4; 
    int sum = 0;

    
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                sum += mtv[i][j];
            }
        }
    }

    // In ket qua
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}