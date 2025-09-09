#include<stdio.h>
int main(){
    int n=8;
    int i,j;
    for(i=0;i<n/2;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(j=0;j<2*(n-i)-9;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n/2;i++){
        for(j=0;j<=n/2-i;j++){
            printf("*");
        }
        for(j=0;j<2*i-1;j++){
            printf(" ");
        }
        for(j=0;j<=n/2-i;j++){
            printf("*");
        }
        printf("\n");
    }
}
