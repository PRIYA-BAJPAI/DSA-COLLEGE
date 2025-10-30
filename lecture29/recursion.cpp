#include<stdio.h>
void num(int a){
    if(a==0){
        return;
    }
    num(a-1);
    printf("%d ",a);
}
int main(){
    num(8);
    return 0;
}