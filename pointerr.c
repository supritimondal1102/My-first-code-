#include<stdio.h>
void swap(int*x, int*y){
    int temp;
    temp = *x;
    *x = 5;//a = 5;
    return;
}
int main(){
    int a = 5;
    int b = 9;
    swap(&a , &b);
    printf("The value of a is %d\n",a);
    printf("the valye of b is %d",b);
     
    return 0;
}