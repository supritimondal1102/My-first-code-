#include<stdio.h>
void main(){

    int n, i, j;
    printf("how many rowos you want in your pyramitid?\n ");
    scanf("%d",&n);
        for(i=0;i<n;i++){        //rows 

        for(j=0;j<n+i;j++){       //columns
            if(j<n-i-1)
         {
            printf(" ");
         }
         else
             printf("* ");
        }
        printf("\n");
    }

    

    

}