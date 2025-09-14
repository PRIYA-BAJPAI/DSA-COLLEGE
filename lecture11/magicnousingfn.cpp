#include<stdio.h>
int magicno_check(int n){
  int sum;
    if(n>9){
      sum=0;
      while(n>0){
        int last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
      }
      n=sum;
    }
    return 0;
    }


int main(){
      int num=1234;
      int n=num;
      if(magicno_check(n)==1){
        printf("%d is a magic no",num);
      }else{
        printf("%d is not a magic no",num);
      }
      return 0;
}