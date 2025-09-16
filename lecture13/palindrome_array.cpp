// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,2,1};
//     int i;
//     int n=5;
//     for( i=0;i<n/2;i++){
//          if(arr[i]!=arr[n-i-1]){
//             printf("not a palindrome");
//             break;
//          }
//     }
//     if(i==n/2){
//         printf("palindrome");
//     }
// }

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int choice=0;
    int i;
    int n=5;
    for( i=0;i<n/2;i++){
         if(arr[i]==arr[n-i-1]){
            choice=1;
            break;
         }
    }
    if(choice){
        printf("not a palindrome");
    }else{
        printf("palindrome");
    }
}