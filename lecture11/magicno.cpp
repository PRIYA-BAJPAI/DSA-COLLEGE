#include<stdio.h>
int main(){
    int num=5467;
    int n=num;
    a:
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
    }
    if(sum>9){
        n=sum;
        goto a;
    }else if(sum==1){
        printf("%d is a magic no",num);
    }else{
        printf("%d is not magic no",num);
    }
    
    }
