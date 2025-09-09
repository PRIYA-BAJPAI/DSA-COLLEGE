#include<stdio.h>
 int main(){
    int n;
    int num=65;
    printf("input no of rows=");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<n-i-1;j++){
            printf(" ");
        }
        //star
        for(int j=0;j<=i;j++){
            printf("%c",num);
            num++;
        }
        for(int j=1;j<=i;j++){
            printf("%c",num);
            num++;
        }
        printf("\n");
    }

 }