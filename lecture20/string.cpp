#include<stdio.h>
int main(){
    char str[]="hii";
    printf("%s\n",str);  //size passing is not necessary
    //another way of printing
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    return 0;
}