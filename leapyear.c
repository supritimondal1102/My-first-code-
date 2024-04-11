#include<stdio.h>
int main(){
    int n;
    printf("Enter a  year : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("leap year ");
    }
    else{
        printf("n0t leap year ");
    }
 return 0;
}
