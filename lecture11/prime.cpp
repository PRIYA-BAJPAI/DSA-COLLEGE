#include<stdio.h>
int is_prime(int n){
    // int n;
    int i;
      if(n<=1){
        printf("Not Prime");
      }
      for(i=2;i<n;i++){
        if(n%i==0){
            printf("Not Prime");
            break;
        }
        
      }
      if(n==i){
        printf("Prime");
      }
      return 0;
}
int main(){
    int n;
    printf("enter no=");
    scanf("%d",&n);
    is_prime(n);
}