#include <stdio.h>

int main() {
    int m, n;
    
    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d %d", &m, &n);
    
    int a[m][n];
    

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i][0];
        sum += a[i][n-1];
    }
    for (int j = 1; j < n-1; j++) {
        sum += a[0][j];
        sum += a[m-1][j]; 
    }
    
    // In kết quả
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    
    return 0;
}