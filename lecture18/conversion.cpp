#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("2D array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int arr1[9];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           arr1[k]=arr[i][j];
           k++;
        }
    }
    printf("1D array:\n");
    for(k=0;k<9;k++){
        printf("%d ",arr1[k]);
    }
    return 0;
}