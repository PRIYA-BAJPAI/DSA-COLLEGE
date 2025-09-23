#include<stdio.h>
int main(){
    int arr[3][3]={{5,46,3},{4,98,66},{87,28,79}};
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("max = %d\n",max);
    printf("min = %d",min);
    return 0;
}