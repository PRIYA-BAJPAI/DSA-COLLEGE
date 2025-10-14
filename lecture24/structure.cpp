#include<stdio.h>
#include<string.h>
struct address{
    int pincode;
};
struct Student{
    char name[50];
    int age;
    int rollno;
    struct address S2;
};
int main(){
    struct Student S1;
     
    strcpy(S1.name,"Priya");
    printf("%s\n",S1.name);
    S1.age=18;
    printf("age : %d\n",S1.age);
    S1.rollno=72;
    printf("rollno : %d\n",S1.rollno);
    S1.S2.pincode=482001;
    printf("pincode : %d\n",S1.S2.pincode);
}