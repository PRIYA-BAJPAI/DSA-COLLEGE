#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");
    for(int i=0;i<n-2;i++){
        printf("* ");
        for(int j=0;j<n-2;j++){
            printf("  ");
        }
        printf("*\n");
    }
    for(int i=0;i<n;i++){
        printf("* ");
    }
}


// //2nd way 

// #include<stdio.h>
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if( i==1 || i==n || j==1 || j==n){
//                 printf("* ");
//             }else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }