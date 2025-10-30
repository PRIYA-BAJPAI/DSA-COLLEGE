#include<stdio.h>
void num(int a){
    if(a==0){
        return;
    }
    printf("%d ",a);

    num(a-1);
}    
int main(){
    num(8);
    return 0;
}