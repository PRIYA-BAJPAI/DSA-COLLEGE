#include<stdio.h>
int sum(){
    int a=5;
    int b=6;
    int c=a+b;
    return c;
}
int main(){
    int ans = sum();
    printf("%d",ans);
    return 0;
}