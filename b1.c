#include<stdio.h>
int main(){

    int a[2][3]={
        {1, 2, 3},
        {4, 5, 6},
    };
    printf(" Gia tri cac phan tu trong mang 2 chieu la: \n");
    for( int i = 0; i<2 ; i++){
        for( int j = 0; j<3 ; j++){
            printf(" a[%d][%d] = %d\n ", i, j, a[i][j]);
        }
    }

    return 0;
}