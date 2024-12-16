#include<stdio.h>
int main(){
   int x,y,z;
   printf("enter three number:");
   scanf("%d %d %d",&x,&y,&z);
   if(x>y && x>z){
      printf("largest number of x is:%d\n",x);

   }else if(y>z && y>x){
      printf("largest number y is:%d\n",y);
   }else {
      printf("largest number z is:%d\n",z);

   }
   return 0;
}