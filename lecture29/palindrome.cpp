#include<stdio.h>
// int palindrome(int arr[],int n,int i){
//         if(n==n/2 && i==n/2){
//             return;
//         }
//         if(arr[n]=arr[i]){
//             palindrome(arr,n-1,i+1);
//             return true;
            
//         }else
//             return false;
        
        

// }
int palindrome(int arr[],int n,int i){
    
        if(arr[n]==arr[i]){

            palindrome(arr,n-1,i+1);
            return true;
            
        }else
            return false;
}
int main(){
    int arr[]={1,2,1};
    int n=2;
    int i=0;
    int result=palindrome(arr,n,i);
    printf("%d",result);
}
//check it