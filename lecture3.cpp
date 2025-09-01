//leap year
#include<stdio.h>
int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0){
        printf("year is leap year");
    }else if(year % 400 == 0 && year % 100 != 0){
        printf("year is leap year");
    }else{
        printf("year is not a leap year");
    }
    return 0;
}

//
// #include<stdio.h>
// int main(){
//     int a=5;
//     //
//     (a<5)?printf("hello"):printf("bye");
// }

// fizz buzz
//  #include<stdio.h>
//  int main(){
//      int n,r,s;
//      printf("enter no:");
//      scanf("%d",&n);
//      r=n%3;
//      s=n%5;
//      if(r==0){
//          printf("fizz");
//      }else if(s==0){
//          printf("buzz");
//      }else if(r==0 && s==0){
//          printf("fizz buzz");
//      }else{
//          printf("rrr");
//      }
//  }

// calculator
//  #include<stdio.h>
//  int main(){
//      int a,b;
//      int ans;
//      char ch;
//      printf("enter two nos:\n");
//      scanf("%d",&a);
//      scanf("%d",&b);
//      //printf("input 1 to add\n2 to sub\n3 to mul\n4 to div");
//      printf("operator:");
//      scanf(" %c",&ch);
//      if(ch='+'){
//          ans=a+b;
//          printf("%d",ans);
//      }else if(ch=='-'){
//          ans=a-b;
//          printf("%d",ans);
//      } if(ch=='*'){
//          ans=a*b;
//          printf("%d",ans);
//      } if(ch=='/'){
//          if(b==0){
//              printf("not defined");
//          }else{
//          ans=a/b;
//          printf("%d",ans);
//          }
//      }
//  return 0;
//  }

// greater no
//  #include<stdio.h>
//  int main(){
//      int a,b;
//      printf("enter two numbers\n");
//      scanf("%d %d",&a,&b);
//      if(a>b){
//          printf("%d is greater",a);
//      }
//      else if(a==b){
//          printf("numbers are equal");
//      }else{
//          printf("%d is greater",b);
//      }
//      return 0;
//  }