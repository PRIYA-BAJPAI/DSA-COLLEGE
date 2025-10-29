#include<stdio.h>
int main(){
    int arr[5]={1,5,5,2,1};
    int unique=0;
    for(int i=0;i<5;i++){
        unique=unique^arr[i];
    }
    printf("%d",unique);
    return 0;
}