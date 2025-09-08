#include<stdio.h>
 int main(){
    int n;
    printf("input no of rows=");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=n;j>i;j--){
            printf("* ");
        }
        printf("\n");
    }

 } 

//  #include<stdio.h>
//  int main(){
//     int n;
//     printf("input no of rows=");
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

//  } 