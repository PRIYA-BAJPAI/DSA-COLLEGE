#include<stdio.h>
int add(int a){
    if(a==0){
        return 0;
    }
    return a+add(a-1);
}
int main(){
    int sum=add(10);
    printf("%d",sum);
    return 0;
}