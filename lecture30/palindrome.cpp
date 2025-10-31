 #include<stdio.h>
 int palindrome(int arr[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]!=arr[j]){
        return 0;
    }
    return palindrome(arr,++i,--j);
 }
 int main(){
    int arr[]={2,2,1};
    int j=2;
    int i=0;
    int result=palindrome(arr,i,j);
    if(result==1){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }
    return 0;
 }