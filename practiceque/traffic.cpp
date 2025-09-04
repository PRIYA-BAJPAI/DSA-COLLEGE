//Traffic Light System
#include<stdio.h>
int main(){
    char color;
    printf("enter color(r,y,g)-->");
    scanf("%c",&color);
    switch(color){
        case 'r':printf("STOP");
                 break;
        case 'y':printf("KEEP SLOW");
                 break;
        case 'g':printf("YOU CAN MOVE");
                 break;
        default:printf("invalid input");
    }
    
}