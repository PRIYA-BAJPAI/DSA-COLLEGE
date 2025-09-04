#include<stdio.h>
int main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    int pdt=1;
    while(n>0){
        int lastdig=n%10;
        pdt=pdt*lastdig;
        n=n/10;
    }
    printf("%d",pdt);
    return 0;
}