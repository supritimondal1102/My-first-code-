#include<stdio.h>
int main(){
    int arr[5];

    for(int i=0;i<=4;i++){ //i =1,2,3,4
        printf("enter alement number%d\n",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=4;i>=0;i--){
        printf("%d",arr[i]);
    }



    return 0;
}