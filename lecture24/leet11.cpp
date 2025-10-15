//container with most water
#include<stdio.h>
int main(){
    int a[9]={1,8,6,2,5,4,8,3,7};
    int i=0;
    int j=8;
    int maxarea=0;
    while(i<j){
        int h;
        if(a[i]<a[j]){
            h=a[i];
        }else{
            h=a[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxarea){
            maxarea=area;
        }
        if(a[i]<a[j]){
            i++;
        }else{
            j--;
        } 
    }
    printf("%d",maxarea);
}