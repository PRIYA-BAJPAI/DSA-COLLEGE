#include<stdio.h>
int main(){
    int arr[5]={-10,20,30,-40,50};
    int sum=0;
    int max=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            sum=arr[i]+arr[j];
        if(sum>max){
            max=sum;
        }
        }
        
    }
    printf("%d",max);
    return 0;
}