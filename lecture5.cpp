//loops
//  #include<stdio.h>
//  int main(){
//     for (int i=10;i>0;i--){
//         printf("%d\n",i);
//     }
//     return 0;
//  }

// #include<stdio.h>
// int main(){
//     for (int i=0;i<10;i++){
//         if(i%2==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("input no=");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("%d",sum);
//     return 0;
// }

//sum of digits
#include<stdio.h>
int main(){
     int n;
     int sum=0;
     printf("enter no:");
     scanf("%d",&n);
     
     while(n>0){
        int lastDigit=n % 10;
        sum=sum+lastDigit;
        n=n/10;
     }
     printf("%d",sum);
     return 0;
}