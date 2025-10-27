//time limit exceed
#include<stdio.h>
int main(){
    int arr[]={6,3,9,9,1};
    int diff;
    int max=0;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            diff=arr[j]-arr[i];
            if(diff>max){
                max=diff;
            }
        }
    }
    printf("Max profit is = %d",max);
    return 0;
}