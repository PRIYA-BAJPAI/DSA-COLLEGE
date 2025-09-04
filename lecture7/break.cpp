// //Break
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=0;i<=n;i++){
//         if(i==3){
//             break;
//         }
//         printf("%d ",i);
//     }
//     return 0;
// }

//continue
#include<stdio.h>
int main(){
    int n=10;
    for (int i=0;i<=n;i++){
        if(i%2==0){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}


