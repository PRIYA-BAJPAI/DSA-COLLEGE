#include<stdio.h>
int digits_addition(int n){
      int sum=0;
      while(n>0){
        int last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
      }
      return sum;
}
int magicno_check(int n){
  int result=n;
      while(result>9){
        result= digits_addition(result);
      }
      if(result==1)
        return 1;
        else
        return 0;
     
      
}
    
    


int main(){
      int num=1548;
      int n=num;
      if(magicno_check(n)){
        printf("%d is a magic no",num);
      }else{
        printf("%d is not a magic no",num);
      }
      return 0;
} 