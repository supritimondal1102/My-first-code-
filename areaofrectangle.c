#include<stdio.h>
int main(){
     int b;
    printf("enter the breadth : ");
    scanf("%d",&b);
    int l ;
    printf("enter the length : ");
    scanf("%d",&l);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        printf("area is greater then parimeter ");
    } 
    if(a<p){
        printf("ariea is less then parimeter ");
    }
    if(a==p){
        printf("ariea is equle to parimeter ");
    }
    return 0;
}