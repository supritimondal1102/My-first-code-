 #include<stdio.h>
 int main(){
   int a;
   printf("enter a : ");
    scanf("%d",&a);
    int b;
   printf("enter b : ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);

    return 0;
}