#include<stdio.h>
int main(){

    int a[2][3]={
        {2, 5, 9},
        {4, 7, 6},
    };
    int answer;
    int count = 0;
    printf(" Hay nhap vao 1 phan tu\n");
    scanf("%d", &answer);

    for( int i = 0; i<2 ; i++){
        for( int j = 0; j<3 ; j++){
           if(answer == a[i][j]){
            printf("Vi tri phan tu trong mang la a[%d][%d]\n", i, j);
            count = 1;
           }
        }
    } 
    if(count == 0){
        printf(" Phan tu khong ton tai trong mang\n");
    }

    return 0;
}