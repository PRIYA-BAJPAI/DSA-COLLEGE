//palindrome
#include<stdio.h>
int main(){
    int a;
    printf("input no");
    scanf("%d",&a);
    int res=0;
    int original=a;
    while(a!=0){
        int lastDigit=a%10;
        res= res*10 + lastDigit;
        a=a/10;
    }
    printf("reverse=%d\n", res);
    if(original==res){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}


