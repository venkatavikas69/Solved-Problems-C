#include<cs50.h>
#include<stdio.h>
int main(void){
    int n ;
    do{
        n =  get_int("n :");
    }while(n<1 || n>8);

    for(int i=n;i>0;i--){
        
        for(int j=i;j>1;j--){
            printf(" ");
        }

        for(int k =i;k<=n;k++){
            printf("#");
            
        }

        printf(" ");
        printf(" ");

        for(int j=i;j<=n;j++){
            printf("#");
        }

        for(int k =i;k>0;k--){
            printf(" ");
            
        }
        printf("\n");
    }
}
