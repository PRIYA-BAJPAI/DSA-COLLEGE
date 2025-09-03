//Prime number
#include<stdio.h>
int main(){
    int num;
    int i;
    printf("Enter Number=");
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
    for(i=2;i<num;i++){
        if(num % i==0){
            printf("Not Prime");
            break;
        }
    }
    if(num==i){
        printf("Prime");
    }
    return 0;
}