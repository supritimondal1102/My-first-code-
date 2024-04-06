#include<stdio.h>

void england(){
    printf("you are in england\n");
    return;// 7
}
void australia(){
    printf("you are in australia\n");
    england(); //calling england //5
    return; //8
}
void india(){
    printf("you are in indian\n"); //2
    australia(); // calling australia //3
    return; //9
}
int main(){
    india(); // calling india //1
    return 0; 10;
}