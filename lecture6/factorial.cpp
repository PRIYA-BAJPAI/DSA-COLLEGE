#include<stdio.h>
int main(){
    int a;
    int fact=1;
    printf("enter no=");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}