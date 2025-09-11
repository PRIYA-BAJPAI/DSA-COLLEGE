#include<stdio.h>
int evodd(int n){
    if(n%2==0){
        printf("even");
    }else{
        printf("odd");
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a no=");
    scanf("%d",&n);
    evodd(n);
    return 0;
}