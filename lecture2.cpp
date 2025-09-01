// grade
 #include<stdio.h>
 int main(){
     int a,m;
     printf("input attandence (in %):");
     scanf("%d",&a);
     printf("input marks:");
     scanf("%d",&m);
     if(a>75 && m>75)
     {
         printf("A");
     }else if(a>75 && m<=75 && m>65)
     {
         printf("B");
     }
     else if(a>75 && m<=65 && m>55){
         printf("C");
     }else if(a>75 && m<=55 && m>45){
         printf("C");
     }else if(a>75 && m<=45 && m>35){
         printf("D");
     }else{
         printf("FAIL");
     }

    return 0;
}



