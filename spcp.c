#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price : ");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp<cp){
        printf("loss");
    }

    return 0;
}
