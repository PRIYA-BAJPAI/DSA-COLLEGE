#include<stdio.h>
int power(int a){
    if(a==0){
        return 1;
    }
    return 2*power(a-1);
}
int main(){
    int sum=power(6);
    printf("%d",sum);
    return 0;
}