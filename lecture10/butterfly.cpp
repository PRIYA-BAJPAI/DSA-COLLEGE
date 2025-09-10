#include<stdio.h>
int main(){
    int n=3;
    //upper
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=0;j<2*(n-i)-2;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");  
}
// lower
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++){
            printf("*");
        }
        for(int j=0;j<2*i;j++){
            printf(" ");
        }
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
}
