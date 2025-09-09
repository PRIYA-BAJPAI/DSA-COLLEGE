// #include<stdio.h>
// int main(){
//     int n;
//     int num=1;
//     printf("input no of rows=");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d",num);
//             num++;
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int n;
    int num=65;
    printf("input no of rows=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",num);
            num++;
        }
        printf("\n");
    }
}