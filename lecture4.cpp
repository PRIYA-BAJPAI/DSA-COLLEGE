//bank
#include<stdio.h>
int main(){
    float amount,d,w;
    int choice;
    printf("input available balance:");
    scanf("%f",&amount);
    a:
    printf("press \n1 to deposit\n2 to withdraw\n3 to display");
    scanf("%d",&choice);
    switch(choice){
          case 1://deposit
          printf("enter amount to deposit: ");
          scanf("%f",&d);
          amount=amount+d;
          printf("amount added successfully");
          goto a;
          case 2://withdraw
          printf("enter amount to withdraw");
          scanf("%f",&w);
          if(amount>=w){
            amount=amount-w;
          printf("amount subtracted successfully");
          goto a;
          }
          amount=amount-w;
          printf("amount subtracted successfully");
          goto a;
          case 3://display
          printf("you have %d ",amount);
          goto a;
          default: goto b;
    }
    b:
    return 0;
}

// //currency converter
// #include<stdio.h>
// int main(){
//     float rup,con;
//     char sy;

//     printf("enter amount in rupee: ");
//     scanf("%f",&rup);
//     printf("currency convert to (symbol): ");
//     scanf(" %c",&sy);
//     switch(sy){
//         case '$'://doller
//         con=rup/87.85;
//         printf("%f",con);
//         break;
//         case 'E'://euro
//         con=rup/90.56;
//         printf("%f",con);
//         break;
//         case 'Y'://japanese
//         con=rup*1.72;
//         break;
//     }
//     return 0;
// }
// //calculator using switch case
// #include<stdio.h>
// int main(){
//     int a,b,ans;
//     char ch;
//     printf("enter two nos:\n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     //printf("input 1 to add\n2 to sub\n3 to mul\n4 to div");
//     printf("operator:");
//     scanf(" %c",&ch);
//     switch(ch){
//     case '+': ans=a+b;
//         printf("%d",ans);
//         break;
//     case '-': ans=a-b;
//         printf("%d",ans);
//         break;
//     case '*': ans=a*b;
//         printf("%d",ans);
//         break;
//     case '/':switch(b==0){
//              case 1:
//             printf("not defined");
//             break;
//              case 0:
//              ans=a/b;
//              printf("%d",ans);
//              break;
//         }
//     }
// return 0;
// }

// //day of week program
// #include<stdio.h>
// int main(){
//     int day;
//     printf("enter count of day:");
//     scanf("%d",&day);
//     switch(day){
//         case 1:printf("Monday");
//         break;
//         case 2:printf("Tuesday");
//         break;
//         case 3:printf("Wednesday");
//         break;
//         case 4:printf("Thursday");
//         break;
//         case 5:printf("Friday");
//         break;
//         case 6:printf("Saturday");
//         break;
//         case 7:printf("Sunday");
//         break;
//     }
//     return 0;
// }

// switch case statement
//  #include<stdio.h>
//  int main(){
//      int a=2;
//      switch(a){
//          case 1:printf("hello");
//          break;
//          case 2:printf("hola");
//          break;
//          case 5:printf("namaskar");
//          break;
//          default:printf("hehe");
//          break;
//          return 0;
//      }
//  }