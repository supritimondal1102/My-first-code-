#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n<0){ // if n is negetive
        n = n*(-1);
    }
    printf("The absolute value is : %d",n);

    return 0;
}