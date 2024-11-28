#include<stdio.h>
int main(){

    int a[2][2]={
        {4,5},
        {9,2},
    };
        int max=a[0][0];
        int i, j;
        for( i = 0 ; i<2; i++){
            for(j = 0; j<2; j++){
                if(a[i][j] > max){
                    max = a[i][j];
                }
            }
        }
    printf(" Gia tri lon nhat co trong mang la: %d", max);
    return 0;
}
