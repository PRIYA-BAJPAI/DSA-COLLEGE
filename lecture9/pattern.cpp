#include<stdio.h>
 int main(){
    int n;
    printf("input no of rows=");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<=i;j++){
            printf(" ");
        }
        //star
        for(int j=0;j<n;j++){
            printf("* ");
        }
        // for(int j=0;j<n-i-1;j++){
        //     printf("*");
        // }
        printf("\n");
    }

 }