#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    int age;
    int rollno;
    
};
int main(){
    struct Student S1[3];
    for(int i=0;i<3;i++){
        printf("enter your name %d ",i);
        scanf("%s",S1[i].name);
    }
    for(int i=0;i<3;i++){
        printf("%s\n",S1[i].name);
    }
}