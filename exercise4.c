#include<stdio.h>
int main(){
    char name[20];
    int age;
    
    printf("Enter your Name: ");
    scanf("%s",&name);    
    printf("Enter your Age: ");
    scanf("%d",&age);
    
    printf("===Informatino===\n");
    printf("Name: %s\n",name);
    printf("Age: %d",age);
    
    
    return 0;
}
