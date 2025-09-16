#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int first=arr[0];
    for(int i=1;i<6;i++){
        arr[i-1]=arr[i];
    }
    arr[4]=first;
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
}