#include<stdio.h>
int main(){

    int n;
    printf(" Nhap vao so nguyen duong bat ky\n");
    scanf("%d", &n);
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                printf(" Nhap vao gia tri o a[%d][%d]\t", i, j);
                scanf("%d", &a[i][j]);
            }
        }
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", a[i][j]);
                }
                printf("\n");
            }

    return 0;
}
