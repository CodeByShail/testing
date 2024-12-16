#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x>0){
        printf("positive number:%d\n",x);

    }else if(x<0){
        printf("negative number:%d\n",x);
    }else{
        printf("zero number:%d\n",x);
    }
    
    
    return 0;


}