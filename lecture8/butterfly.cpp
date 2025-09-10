#include<stdio.h>
int main(){
    int n=4;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(j=0;j<2*(n-i)-2;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=0;j<=n-i-1;j++){
            printf("*");
        }
        for(j=1;j<2*i+1;j++){
            printf(" ");
        }
        for(j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
}
