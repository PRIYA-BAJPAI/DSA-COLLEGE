#include<stdio.h>
int main(){
    int arr[6]={1,5,4,6,2,5};
    int n=5;
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]==n){
             count++;
        }
    }
    printf("%d",count);
}

